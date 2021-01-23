
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;
//Khai bao cau truc du lieu cua danh sach
struct HOCPHAN
{
	char mahp[15];
	char tenhp[30];
	int sotc;
};
struct Node		//Khai bao kieu du lieu cua mot node
{
	HOCPHAN infor;
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
//Nhap thong tin cho mot hoc phan
void NhapHP( HOCPHAN &hp)
{
	cout<<"\n\tNhap ma hoc phan: ";	fflush(stdin);
	gets(hp.mahp);
	cout<<"\tTen hoc phan: ";	fflush(stdin);
	gets(hp.tenhp);
	cout<<"\tSo tin chi: ";		cin>>hp.sotc;
}
//Nhap vao danh sach hoc phan
void NhapdsHP(TRO &L, int n)
{
	Initialize(L);
	HOCPHAN X;
	TRO Q, P;
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap vao hoc phan thu "<<i+1<<" : ";
		NhapHP(X);
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
//Hien thi danh sach hoc phan
void Hienthids(TRO L, int &n)
{
	HOCPHAN X;
	cout<<setw(5)<<"STT";
	cout<<setw(15)<<"Ma hoc phan: ";
	cout<<setw(30)<<"Ten hoc phan: ";
	cout<<setw(25)<<"So tin chi: "<<endl;
	TRO Q = L;
	if(Q!=NULL)
	{
		for(int i= 0; i<n; i++)
	{
		HOCPHAN X = Q->infor;
		cout<<setw(5)<<(i+1);
		cout<<setw(15)<<X.mahp;
		cout<<setw(30)<<X.tenhp;
		cout<<setw(25)<<X.sotc<<endl;
		Q = Q->next;
	}
	}
}
// Bo sung hoc phan moi vao vi tri thu 3 trong danh sach
//Ham bo sung vao mot nut
void Insert(TRO &L, TRO Q, HOCPHAN X)
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
	HOCPHAN X;
	//Nhap thong tin cua hoc phan can bo sung
	cout<<"Nhap thong tin hoc phan can bo sung: "<<endl;
	NhapHP (X);
	//Bo sung X vao vi thu thu 3
	//Tim den nut dung truoc nut thu 3 va cho Q tro vao nut nay
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
	cout<<"Danh sach sau khi chen mot hoc phan moi vao vi tri thu 3 la: \n";
	Hienthids(L,n);
}
int main()
{
	HOCPHAN X;
	int n;
	TRO L;
	do
	{
		cout<<"Nhap vao so hoc phan : ";
		cin>>n;
	}
	while(n<4||n>50);

	cout<<"Nhap vao danh sach cac hoc phan: \n";
	NhapdsHP(L,n);
	cout<<"\n";
	cout<<"Danh sach vua nhap la: \n";
	Hienthids(L,n);
	cout<<"\n";
	cout<<"Danh sach sau khi chen mot hoc phan moi vao vi tri thu 3 la: \n";
	BoSung(L,n);
	return 0;
}
