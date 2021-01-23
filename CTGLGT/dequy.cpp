#include<bits/stdc++.h>
using namespace std;
//A={1,1,3,5,11,21,43};
int A(int n){
    if(n<2)
        return 1;
    return A(n-1)+2* A(n-2);
}
//B={1,2,4,6,8,16}
int B(int n){
    if(n<1) return 1;
    return 2*B(n-1);
}
//C={4,3,-2,-6,-5,0,4}
int C(int n){
    if(n==0){
        return 4;
    }
    if(n==1){
        return 3;
    }
    return C(n-1)-C(n-2)-1;
}
/*
    tinh f(4);
*/
int F(int a){
    if(a>=10){
        return a*a;
    }
    return a+F(a+1);
}
int luythua(int x,int n){
    if(n==0)    return 1;
    return x*luythua(x,n-1);
}
int UCLN(int a,int b){
    if(a%b ==0) return b;
    return UCLN(b,a%b);
}
//ma de 5295
int tinhF(int a,int b){
    if(a>0) return pow(a,b);
    else if(a==0)   return b;
    else return b+tinhF(a+1,b);
}
int DemSoChuaSo(int n){
    if(n<10)    return 1;
    return 1+ DemSoChuaSo(n/10);
}
int giaithua(int n){
    if(n<1) return 1;
    return n*giaithua(n-1);
}
long long tinh_F(int n){
    if(n==0){
        return 1;
    }
    else if(n==1)    return 2;
    return (tinh_F(n-1)*tinh_F(n-1))+1;
}

int main(){
    int n,a,b;
    int x=3;
    cout<<"n= ";
    cin>>n;
    cout<<"luy thua= "<<luythua(x,n)<<endl;
   /* for(int i=0;i<=n;i++){
    cout<<A(i)<<" ";
    }
    cout<<"\n";
    for(int i=0;i<=n;i++){
    cout<<B(i)<<" ";
    }
    cout<<"\n";
    for(int i=0;i<=n;i++){
    cout<<C(i)<<" ";
    }
    cout<<"\n nhap a= ";
    cin>>a;
    cout<<"\n f= "<<F(a);
    cout<<"\n nhap b= ";
    cin>>b;
    cout<<"\n UCLN= "<<UCLN(a,b);
    cout<<"\n tinh F= "<<tinhF(a,b);

    cout<<"\n dem so chu so= "<<DemSoChuaSo(n);
    //cout<<"\n giai thua= "<<giaithua(n);
    for(int i=0;i<=n;i++){
            //if(tinh_F(i)%2 != 0){
                cout<<endl<<tinh_F(i)<<" ";
           // }

    }
*/
    return 0;
}
