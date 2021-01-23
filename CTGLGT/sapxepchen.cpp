#include<bits/stdc++.h>
using namespace std;

void sapxep(int X[], int n){
    for(int i=1;i<=n;i++)
    {
        int bien=X[i];
        int j=i-1;
        while(bien>X[j] && j>=0)
        {
            X[j+1]=X[j];
            j--;
        }
       X[j+1]=bien;
    }
}
int main(){
    int n=6;
    int X[]={18,73,17,56,10,26,62};
    sapxep(X,n);
    for(int i=0;i<n;i++){
        cout<<"\t"<<X[i];
    }
    return 0;
}
