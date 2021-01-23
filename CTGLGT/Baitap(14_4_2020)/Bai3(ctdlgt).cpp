#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct SACH
{
	char masach[15];
	char tensach[30];
	int soluong;
};
struct Node	
{
	SACH data;
	Node *next;
};
typedef Node *TRO;	
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
	cout<<"\tNhap so luong sach: ";		cin>>sach.soluong;
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
		P->data = X;
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
//Hien thi danh sach sach
void Hienthidssach(TRO L, int &n)
{
	SACH X;
	cout<<setw(5)<<"STT";
	cout<<setw(15)<<"Ma sach: ";
	cout<<setw(30)<<"Ten sach: ";
	cout<<setw(25)<<"So luong: "<<endl;
	TRO Q = L;
	if(Q!=NULL)
	{
		for(int i= 0; i<n; i++)
	{
		SACH X = Q->data;
		cout<<setw(5)<<(i+1);
		cout<<setw(15)<<X.masach;
		cout<<setw(30)<<X.tensach;
		cout<<setw(25)<<X.soluong<<endl;
		Q = Q->next;
	}
	}
}
// Bo sung sach moi vao vi tri thu 4 trong danh sach
//Ham bo sung vao mot nut
void Insert(TRO &L, TRO Q, SACH X)
{
	// Tao mot nut moi
	TRO P;
	P = new (Node);
	P->data = X;
	//Ghep nut moi vao danh sach
	P->next = Q->next;
	Q->next = P;
}
//Ham bo sung phan tu moi vao vi tri thu 4
void BoSung(TRO &L, int &n)
{
	SACH X;
	//Nhap thong tin sach can bo sung
	cout<<"Nhap thong tin sach can bo sung: "<<endl;
	Nhapsach (X);
	//Bo sung X vao vi thu thu 4
	//Tim den nut dung truoc nut thu 4 va cho Q tro vao nut nay
	TRO Q = L;
	int d = 1;
	while(d<3)
	{
		d++;
		Q = Q->next;
	}
	n++;
// Bo sung X vao sau nut tro boi Q
Insert(L,Q,X); 
	cout<<"/nDanh sach sau khi chen mot cuon sach  vao vi tri thu 4 la: \n";
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
	
	cout<<"Nhap danh sach sach: \n";
	Nhapdssach(L,n);
	cout<<"\n";
	cout<<"Danh sach sach vua nhap la: \n";
	Hienthidssach(L,n);
	cout<<"\n";
	BoSung(L,n);
	return 0;
}
