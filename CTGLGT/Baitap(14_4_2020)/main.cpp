#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct Hocphan
{
    int MaHP;
    string tenHP;
    int sotinchi;
};

struct Node
{
    Hocphan data;
    Node *pNext;

};
typedef struct Node NODE;
struct List
{
    NODE *pHead; // node quản lí đầu danh sách
    NODE *pTail; // node quản lí cuối danh sách
};
typedef struct List LIST;


/*void create(TRO &l)
{
      l = NULL;
}*/
void KhoiTao(LIST &l)
{
    // cho 2 node trỏ đến NULL - vì danh sách liên kết đơn chưa có phần tử
    l.pHead = NULL;
    l.pTail = NULL;
}
// hàm khởi tạo 1 cái node
NODE *KhoiTaoNODE(Hocphan x)
{
    NODE *p = new NODE; // cấp phát vùng nhớ cho NODE p
    if (p == NULL)
    {
        cout << "\nKhong du bo nho de cap phat";
        return NULL;
    }
    p->data = x; // truyền giá trị x vào cho data
    p->pNext = NULL; // đầu tiên khai báo node thì node đó chưa có liên kết đến node nào hết ==> con trỏ của nó sẽ trỏ đến NULL
    return p; // trả về NODE p vừa khởi tạo
}
void nhapHP(Hocphan &hp)
{
    cout<<"'\t nhap ma hoc phan: ";
    cin>>hp.MaHP;
    fflush(stdin);
    cout<<"\n\t nhap ten hoc phan: ";
    getline(cin,hp.tenHP);
    cout<<"\n\t nhap so tin chi: ";
    cin>>hp.sotinchi;

}
void xuatHP(Hocphan hp)
{
    cout<<"\n\t\t ma hoc phan: "<<hp.MaHP;
    cout<<"\t\t ten hoc phan: "<<hp.tenHP;
    cout<<"\t\t so tin chi: "<<hp.sotinchi;
    cout<<"\n\n";
}

void ThemVaoCuoi(LIST &l, NODE *p)
{
    /// danh sách đang rỗng
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p; // node đầu cũng chính là node cuối và là p
    }
    else
    {
        l.pTail->pNext = p; // cho con trỏ của pTail liên kết với node p
        l.pTail = p; // cập nhật lại p là node pTail
    }
}
void XuatDanhSach(LIST l)
{

    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
    {

        xuatHP(k->data);

    }
}



void XoaDau(LIST &l)
{
    // nếu danh sách rỗng
    if (l.pHead == NULL)
    {
        return;
    }
    NODE *p = l.pHead; // node p là node sẽ xóa
    l.pHead = l.pHead->pNext;// cập nhật lại l.pHead là phần tử kế tiếp
    delete p;
}
void ThemDau(LIST &l, NODE *p)
{
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        p->pNext=l.pHead;
        l.pHead=p;
    }
}

void ThemCuoi(LIST &l, NODE *p)
{
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void ThemViTriBatKi(LIST &l, NODE *p)
{
    int n=0,vt;
    for(NODE *k=l.pHead; k!=NULL; k=k->pNext)
    {
        n++;
    }
    do
    {
        cout<<"nhap vi tri can chen :";
        cin>>vt;
    }
    while(vt<1 || vt>(n+1));

    if(l.pHead==NULL || vt==1)
    {
        ThemDau(l, p);
    }
    else if(vt==n+1)
    {
        ThemCuoi(l, p);
    }
    else
    {
        int dem=0;
        NODE *g=new NODE;
        for(NODE *k=l.pHead; k!=NULL; k=k->pNext)
        {
            dem++;
            if(dem==vt)
            {
                NODE*h=KhoiTaoNODE(p->data);
                h->pNext=k;
                g->pNext=h;
                break;
            }
            g=k;
        }
    }
}



int main()
{
    LIST l;
    KhoiTao(l); // khởi tạo danh sách liên kết đơn
    int n;
    cout << "\nNhap so luong node can them: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        Hocphan x;
        nhapHP(x);
        NODE *p = KhoiTaoNODE(x); // khởi tạo 1 cái node kieu hoc phan
        ThemVaoCuoi(l, p); // thêm node p vào đầu danh sách liên kết đơn
    }
    cout << "\n\n\t DANH SACH LIEN KET DON\n";
    XuatDanhSach(l);
    Hocphan x;
    cout<<"\n\t nhap thong tin hoc phan can them:";
    nhapHP(x);
    NODE *p=KhoiTaoNODE(x);
    ThemViTriBatKi(l,p);
    XuatDanhSach(l);


    return 0;
}
