#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct THISINH
{
	char sobd[15];
	char hoten[30];
	int namsinh;
	char khoithi[5];
};
struct Node		
{
	THISINH data;
	Node *next;
};
typedef Node *TRO;		

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

void NhapTS( THISINH &ts)
{
	cout<<"\n\tNhap so bao danh : ";	fflush(stdin);
	gets(ts.sobd);
	cout<<"\tNhap ho va ten: ";	fflush(stdin);
	gets(ts.hoten);
	cout<<"\tNhap nam sinh: ";		cin>>ts.namsinh;
	cout<<"\tNhap khoi thi: ";		fflush(stdin);
	gets(ts.khoithi);
}

void NhapdsTS(TRO &L, int n)
{
	Initialize(L);
	THISINH X;
	TRO Q, P;
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap vao thong tin thi sinh thu "<<i+1<<" : ";
		NhapTS(X);
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
//Hien thi danh sach thi sinh
void Hienthidsts(TRO L, int &n)
{
	THISINH X;
	cout<<setw(10)<<"STT";
	cout<<setw(15)<<"So bao danh: ";
	cout<<setw(25)<<"Ho va ten: ";
	cout<<setw(15)<<"Nam sinh: ";
	cout<<setw(15)<<"Khoi thi: "<<endl;
	TRO Q = L;
	if(Q!=NULL)
	{
		for(int i= 0; i<n; i++)
	{
		THISINH X = Q->data;
		cout<<setw(10)<<(i+1);
		cout<<setw(15)<<X.sobd;
		cout<<setw(25)<<X.hoten;
		cout<<setw(15)<<X.namsinh;
		cout<<setw(15)<<X.khoithi<<endl;
		Q = Q->next;
	}
	}
}
// Xoa thi sinh o vi tri thu 3 trong danh sach
//Ham xoa nut tro boi T trong danh sach
void Remove(TRO &L, TRO T)
{
	TRO Q;
	if(T==L)	//TH nut T la nut dau tien
	T = T->next;
	else		//TH nut T khong la nut dau tien
	{
		Q = L;
		while(Q->next !=T)	//Tim den nut dung truoc nut tro boi T
		Q = Q->next;
		Q->next = T->next;		//Ghep nut tro boi Q voi nut dung sau nut can xoa
	}
	delete T;		//Loai bo nut tro boi T
}
//Ham xoa thi sinh o vi tri thu 3
void Xoathisinh(TRO &L, int &n)
{
	TRO T;
	//Tim den nut dung truoc nut vi tri thu 3 va cho Q tro vao nut nay
	TRO Q  = L;
	int d = 1;
	while(d<2)
	{
		d++;
		Q = Q->next;
	}
	T = Q->next;
	n--;
	Remove(L,T);
	cout<<"Danh sach sau khi xoa mot thi sinh o vi tri thu 3 la: \n";
	Hienthidsts(L,n);
}
int main()
{
	THISINH X;
	int n;
	TRO L;
	do
	{
		cout<<"Nhap vao so thi sinh : ";
		cin>>n;
	}
	while(n<4||n>50);
	
	cout<<"Nhap danh sach cac thi sinh: \n";
	NhapdsTS(L,n);
	cout<<"\n";
	cout<<"Danh sach vua nhap la: \n";
	Hienthidsts(L,n);
	cout<<"\n";
	Xoathisinh(L,n);
	return 0;
}
