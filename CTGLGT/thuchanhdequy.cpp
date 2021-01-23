#include<bits/stdc++.h>
using namespace std;

int bai1(int n)
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        return  n*bai1(n-1);
    }
}
int UCLN_bai2(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    else
    {
        if(a>b)
            return UCLN_bai2(a-b,b);
        return UCLN_bai2(a,b-a);
    }
}
int GT_bai3(int n)
{
    if(n==0)    return 1;
    else    return n*GT_bai3(n-1);

}
int demSoChuSoNguyen(int n)
{
    if(n<10)
    {
        return 1;
    }
    else
    {
        return 1+demSoChuSoNguyen(n/10);
    }

}
int tinh_F(int n)
{
    if(n==0)    return 1;
    else
    {
        return 2*n*tinh_F(n-1);
    }
}
int tinh_F_bai6(int n)
{
    if(n<=2) return 1 ;
    else return tinh_F_bai6(n-2)+tinh_F_bai6(n-1) ;

}
int tinh_F_bai7(int a)
{
    if(a>=10) return a*a ;
    else   return a+tinh_F_bai7(a+1) ;

}
int main()
{
    int n,a,b;
    cout<<"\n nhap n: ";
    cin>>n;
    cout<<"bai1= "<< bai1(n);
    cout<<"\n nhap a ,b:";
    cin>>a>>b;
    cout<<"\n bai 2: " <<UCLN_bai2(a,b);
    cout<<"\n bai3= "<<GT_bai3(n);
    cout<<"\n bai4= "<<demSoChuSoNguyen(n);
    cout<<"\n bai 5= "<<tinh_F(n);
    cout<<"\n bai6= :"<<tinh_F_bai6(n);
    cout<<"\n nhap a: ";
    cin>>a;
    cout<<"\n bai7= :"<<tinh_F_bai7(a);


    return 0;
}
