#include<bits/stdc++.h>
using namespace std;
void sapxepchon(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int Min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[Min])
            {
                Min=j;
            }
        }
        if(Min!=i){
            swap(a[i],a[Min]);
        }
    }

}
void sapxepchen(int a[], int n)
{
    for(int i=1;i<n;i++){
        int bien=a[i];
        int j=i-1;
        while(bien>a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=bien;
    }
}
void sapxepnoibot(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
void sapxepgiamchon(int a[],int n)
{
    for(int i=0;i<n-1;i++){
        int m=i;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[m]){
                m=j;
            }
        }
        if(m!=i){
            swap(a[i],a[m]);
        }
    }
}
int main(){
    int n=7;
    int a[]={18,73,17,56,10,26,62};
   /* sapxepchon(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    */
   /* cout<<"\n";
    sapxepchen(a,n);
   for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\n";
    sapxepnoibot(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }*/
    cout<<"\n hello";
    sapxepgiamchon(a,n);
        for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }


    return 0;

}
