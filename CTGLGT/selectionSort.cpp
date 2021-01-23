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

void selectionSort(int *a, int n)
{
    for(int i = 0;i<n-1; i++){
        int min = i;
        for(int j = i +1 ; j < n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int tg = a[min];
        a[min]=a[i];
        a[i]=tg;
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
 selectionSort(a, n);
 cout << "\nmang khi sap xep la: ";
 xuat_mang(a, n);

 return 0;
}
