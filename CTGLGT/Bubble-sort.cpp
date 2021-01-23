#include<iostream>
using namespace std;

void nhap_mang(int *&a, int &n) {
    cout << "nhap so phan tu cua mang n:";
    cin >> n;
    for (int i = 0; i<n; i++) {
    cout << "phan tu a[" << i << "]" << "=";
    cin >> a[i];
    }
}

void BubleSort(int *a, int n)
{
    int temp;
    for(int i = 0; i< n - 1; i++){
        for(int j = n - 1; j > 0; j-- ){
            if(a[j]>a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1]=temp;
            }
        }
    }
}


void xuat_mang(int *a, int &n) {
     for (int i = 0; i < n; i++)
     {
        cout << a[i] << " ";
     }
}

int main() {
 int  n;
 int  *a = new int[n];
 nhap_mang(a, n);
 cout << "\nmang ban dau la: ";
 xuat_mang(a, n);
 BubleSort(a, n);
 cout << "\nmang khi sap xep la: ";
 xuat_mang(a, n);

 return 0;
}
