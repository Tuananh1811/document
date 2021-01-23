#include<bits/stdc++.h>
using namespace std;
#define Max 100
//khai bao cau truc du lieu danh sach
struct Sach
{
    int masach;
    char tensach[15];
    char tentacgia[30];
    int namxuatban;
};
struct List
{
    int dem;
    Sach S[Max];
};
//khởi tạo danh sach rỗng
void khoitao(List &l)
{
    l.dem=-1;
}
int kiemtradanhsachrong(List l)
{
    return l.dem==-1;
}
int kiemtradanhsachday(List l)
{
    return l.dem==Max-1;
}

int them(List &l, Sach X)
{
    if(kiemtradanhsachday(l)==true)   return 0;
    else
    {
        l.dem++;
        l.S[l.dem]=X;//trong danh sách có nhiều quyển sách (không biết giải thích sao nữa.nào gặp trực tiếp nói cho)
        return 1;

    }
}
void nhap_1_quyensach(Sach &S)
{
    cout<<"\n nhap ma sach: ";
    cin>>S.masach;
    fflush(stdin);
    cout<<"\n nhap ten sach: ";
    gets(S.tensach);
    fflush(stdin);
    cout<<"\n nhap ten tac gia: ";
    gets(S.tentacgia);
    fflush(stdin);
    cout<<"\n nhap nam xuat ban: ";
    cin>>S.namxuatban;

}
void xuat_1_quyensach(Sach S)
{
    cout<<"\n ma sach: "<<S.masach;
    cout<<"\n ten sach: "<<S.tensach;
    cout<<"\n ten tac gia: "<<S.tentacgia;
    cout<<"\n nam xuat ban: "<<S.namxuatban;
}
void nhap_ds(List &l, Sach &S)
{
    int n;
    cout<<"\n nhap so sach: ";
    cin>>l.dem;
    for(int i=0; i<l.dem; i++)
    {
        nhap_1_quyensach(l.S[i]);

    }
}
void xuat_ds(List l, Sach S)
{
    int n;
    cout<<"\n danh sach : ";
    for(int i=0; i<l.dem; i++)
    {
        xuat_1_quyensach(l.S[i]);
        // cout<<endl;

    }
}

void chen_vitribatki(List &l,int vt)
{
    Sach X;
    int n;
    cout<<"\n nhap vi tri can chen: ";
    cin>>vt;
    nhap_1_quyensach(X);
    for(int i=n; i>=vt; i--)
    {
        l.S[i+1]=l.S[i];
    }
    n++;

    l.S[vt]=X;


}
void xoa(List &l,int vt)
{

    Sach X;
    int n;
    cout<<"\n nhap vi tri can xoa: ";
    cin>>vt;
    for(int i=vt; i<n; i++)
    {
        l.S[i]=l.S[i+1];
    }
    n--;


}
void sapxep(List &l)//sap xep tang cua ma sach
{
    int n;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(l.S[j].masach>l.S[j+1].masach)
            {
                Sach tg=l.S[j]; //phep gan cau truc
                l.S[j]=l.S[j+1];
                l.S[j+1]=tg;


            }
        }
    }
}

int main()
{
    List l;
    Sach S;
    int n;
    int vt;
    nhap_ds(l,S);
    xuat_ds(l,S);
    chen_vitribatki(l,vt);
    xuat_ds(l,S);
    xoa(l,vt);
    xuat_ds(l,S);
    sapxep(l);
    xuat_ds(l,S);
    return 0;
}
