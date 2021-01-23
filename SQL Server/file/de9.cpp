#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class TruongDH;
class Khoa{
    char makhoa[20];
    char tenkhoa[20];
    char trgkhoa[20];
    friend class TruongDH;
    friend void hienthi(TruongDH a[], int n);
    friend void chen(TruongDH a[], int n);
};
class Ban{
    char maban[20];
    char tenban[20];
    int ntl;
    friend class TruongDH;
    friend void chen(TruongDH a[], int n);
};
class Truong{
protected:
    char matruong[20];
    char tentruong[20];
public:
    void nhap(){
        cout<<"Nhap ma truong: ";fflush(stdin);gets(matruong);
        cout<<"Nhap ten truong: "; fflush(stdin);gets(tentruong);
    }
    void xuat()
    {
        cout<<"Ma truong"<<setw(10)<<"Ten truong"<<endl;
        cout<<matruong<<setw(10)<<tentruong<<endl;
    }
};
class TruongDH:public Truong{
    int sokhoa;
    Khoa x[30];
    int soban;
    Ban y[30];
public:
    void nhap()
    {
        Truong::nhap();
        cout<<"Nhap so khoa: ";cin>>sokhoa;
        for(int i=0;i<sokhoa;i++)
        {
            cout<<"Khoa thu "<<i+1<<endl;
            cout<<"Nhap ma khoa: ";fflush(stdin);
            gets(x[i].makhoa);
            cout<<"Nhap ten khoa: ";fflush(stdin);
            gets(x[i].tenkhoa);
            cout<<"Nhap trg khoa: ";fflush(stdin);
            gets(x[i].trgkhoa);
        }
        cout<<"Nhap so ban: ";cin>>soban;
        for(int i=0;i<soban;i++)
        {
            cout<<"Ban thu "<<i+1<<endl;
            cout<<"Nhap ma ban: ";fflush(stdin);
            gets(y[i].maban);
            cout<<"Nhap ten ban: ";fflush(stdin);
            gets(y[i].tenban);
            cout<<"NTL: ";cin>>y[i].ntl;
        }

    }
    void xuat()
    {
        Truong::xuat();
        cout<<"Danh sach khoa: "<<endl;
        cout<<setw(10)<<"Ma khoa"<<setw(10)<<"Ten khoa"<<setw(10)<<"trg khoa"<<endl;
        for(int i=0;i<sokhoa;i++)
        {
            cout<<setw(10)<<x[i].makhoa<<setw(10)<<x[i].tenkhoa<<setw(10)<<x[i].trgkhoa<<endl;
        }
        cout<<"Danh sach ban: "<<endl;
        cout<<setw(10)<<"Ma ban"<<setw(10)<<"Ten ban"<<setw(10)<<"NTL"<<endl;
        for(int i=0;i<soban;i++)
        {
            cout<<setw(10)<<y[i].maban<<setw(10)<<y[i].tenban<<setw(10)<<y[i].ntl<<endl;
        }
    }
    friend void hienthi(TruongDH a[], int n);
    friend void sx(TruongDH a[],int n);
    friend void chen(TruongDH a[], int n);
};
void hienthi(TruongDH a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a[i].sokhoa;j++)
        {
            if(strcmp(a[i].x[j].tenkhoa,"COKHI")==0)
            {
                a[i].xuat();
                break;
            }
        }
    }
}
void sx(TruongDH a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].matruong<a[j].matruong)
            {
                TruongDH tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
}
void chen(TruongDH a[], int n)
{
    TruongDH moi;
    moi.nhap();
    int k;
    cout<<"Nhap vi tri can chen: ";cin>>k;
    for(int i=n;i>=k;i--)
    {
        a[i]=a[i-1];
    }
    a[k]=moi;
    n++;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }

}

int main()
{
    TruongDH a[20];
    int n;
    cout<<"Danh sach truong dh: ";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"truong thu "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
    cout<<endl;
    hienthi(a,n);
    cout<<"sap xep"<<endl;
    sx(a,n);
    cout<<endl;
    cout<<"chen: "<<endl;
    chen(a,n);
    getch();

}
