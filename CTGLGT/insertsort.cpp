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

void InsertSort(int *a, int n)
{
    int t, j;
    for (int i = 1; i<n; i++)
    {
        j = i - 1;
        t = a[i];
    while (t<a[j] && j >= 0)
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = t;
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
 InsertSort(a, n);
 cout << "\nmang khi sap xep la: ";
 xuat_mang(a, n);

 return 0;
}
