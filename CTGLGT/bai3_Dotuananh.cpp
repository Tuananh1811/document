
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;
//Khai bao cau truc du lieu cua danh sach
struct SACH
{
	char masach[15];
	char tensach[30];
	char tentacgia[35];
	char namxuatban[5];
};
struct Node		//Khai bao kieu du lieu cua mot node
{
	SACH infor;
	Node *next;
};
typedef Node *TRO;		//Dinh nghia kieu con tro tro vao Node
//Khai bao cac ham can thiet
//Ham khoi tao danh sach rong
void Initialize(TRO &L)
{
	L = NULL;
}
//Kiem tra danh sach rong
int Empty(TRO L)
{
	return L == NULL;
}
//Nhap thong tin cho mot cuon sach
void Nhapsach( SACH &sach)
{
	cout<<"\n\tNhap ma sach: ";	fflush(stdin);
	gets(sach.masach);
	cout<<"\tNhap ten sach: ";	fflush(stdin);
	gets(sach.tensach);
	cout<<"\tNhap ten tac gia: "; fflush(stdin);
	gets(sach.tentacgia);
	cout<<"\tNhap nam xuat ban: "; fflush(stdin);
	gets(sach.namxuatban);
}
//Nhap vao danh sach sach
void Nhapdssach(TRO &L, int n)
{
	Initialize(L);
	SACH X;
	TRO Q, P;
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap vao cuon sach thu "<<i+1<<" : ";
		Nhapsach(X);
		P = new (Node);
		P->infor = X;
		P->next = NULL;
		if(L==NULL)
		{
			L=P;
		}
		else
		{
			Q->next = P;
		}
			Q = P;
	}
}
//Hien thi danh sach cac cuốn sach
void Hienthidssach(TRO L, int &n)
{
	SACH X;
	cout<<setw(5)<<"STT";
	cout<<setw(15)<<"Ma sach: ";
	cout<<setw(30)<<"Ten sach: ";
	cout<<setw(35)<<"Ten tac gia: ";
	cout<<setw(20)<<" Nam xuat ban: "<<endl;
	TRO Q = L;
	if(Q!=NULL)
	{
		for(int i= 0; i<n; i++)
	{
		SACH X = Q->infor;
		cout<<setw(5)<<(i+1);
		cout<<setw(15)<<X.masach;
		cout<<setw(30)<<X.tensach;
		cout<<setw(35)<<X.tentacgia;
		cout<<setw(20)<<X.namxuatban<<endl;
		Q = Q->next;
	}
	}
}
// Bo sung sach moi vao vi tri thu 3 trong danh sach
//Ham bo sung vao mot nut
void Insert(TRO &L, TRO Q, SACH X)
{
	// Tao mot nut moi
	TRO P;
	P = new (Node);
	P->infor = X;
	//Ghep nut moi vao danh sach
	P->next = Q->next;
	Q->next = P;
}
//Ham bo sung phan tu moi vao vi tri thu 3
void BoSung(TRO &L, int &n)
{
	SACH X;
	//Nhap thong tin sach can bo sung
	cout<<"Nhap thong tin sach can bo sung: "<<endl;
	Nhapsach (X);
	//Bo sung X vao vi thu thu 3
	//Tìm đến nút đứng trước nút thứ 3 và cho Q trỏ vào nút này
	TRO Q = L;
	int d = 1;
	while(d<2)
	{
		d++;
		Q = Q->next;
	}
	n++;
// Bo sung X vao sau nut tro boi Q
    Insert(L,Q,X);
	cout<<"\nDanh sach sau khi chen mot cuon sach  vao vi tri thu 3 la: \n";
	Hienthidssach(L,n);
}
int main()
{
	SACH X;
	int n;
	TRO L;
	do
	{
		cout<<"Nhap vao so sach : ";
		cin>>n;
	}
	while(n<5||n>50);

	cout<<"Nhap vao danh sach cac cuon sach: \n";
	Nhapdssach(L,n);
	cout<<"\n";
	cout<<"Danh sach cac cuon sach vua nhap la: \n";
	Hienthidssach(L,n);
	cout<<"\n";
	BoSung(L,n);
	return 0;
}
