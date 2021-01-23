//#include<bits/stdc++.h>//có hoặc không cũng được
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;
float xwmin,ywmin,xwmax,ywmax;
float tlx,tly;
int xvmin,yvmin,xvmax,yvmax;

void cuaso(float x1,float y1,float x2,float y2)
{
    xwmin=x1;
    ywmin=y1;
    xwmax=x2;
    ywmax=y2;
}
void khungnhin(int x1,int y1,int x2,int y2)
{
    xvmin=x1;
    yvmin=y1;
    xvmax=x2;
    yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);

}
void chuyenden2D(float x,float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym=(int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);

}
void veden2D(float x,float y)//giống chuyển đến 2D khác moveto
{

    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym=(int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);
}
void vedothi(float xmin,float xmax)
{
    float dx=0.01;
    float x=xmin;
    float y=-x*x*x+3*x*x;/////thay đổi tùy đề bài cho hàm như nào
    chuyenden2D(x,y);
    while(x<=xmax)
    {
        x+=dx;
        y=-x*x*x+3*x*x;////như trên
        veden2D(x,y);
    }
}
void trucxoy(){
    //truc 0x
    chuyenden2D(xwmin,0);
    veden2D(xwmax,0);
    //truc oy
    chuyenden2D(0,ywmin);
    veden2D(0,ywmax);
    //muiten 0y x la hang so
    chuyenden2D(-0.15,ywmax-0.15);
    veden2D(0,ywmax);
    chuyenden2D(0.15,ywmax-0.15);
    veden2D(0,ywmax);
    //mui ten 0x y là hang so
    chuyenden2D(xwmax-0.15,-0.15);
    veden2D(xwmax,0);
    chuyenden2D(xwmax-0.15,0.15);
    veden2D(xwmax,0);
    //chia vach
    for(int i=xwmin;i<=xwmax;i++)
    {
        chuyenden2D(i,0.1);
        veden2D(i,-0.1);
    }
    for(int i=ywmin;i<=ywmax;i++)
    {
        chuyenden2D(0.1,i);
        veden2D(-0.1,i);
    }
}
int main(){
    initwindow(600,600);
    cuaso(-4,-3,5,7);//cửa sổ tùy đề bài tự tính
    khungnhin(100,150,9*25+100,10*25+150);//khung nhìn do cửa sổ tự tính kc*đô phóng đại+X0
    trucxoy();
    setcolor(10);//thichs màu nào cũng đc
    vedothi(-1,3);//dựa vào đề bài cho khoảng nghiệm
    setcolor(3);
    getch();
    closegraph();
}


















