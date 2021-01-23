#include<graphics.h>
#include<math.h>
#include<bits/stdc++.h>
float xwmin, ywmin, xwmax, ywmax;
float tlx, tly;
int xvmin, yvmin, xvmax, yvmax;
void cuaso(float x1, float y1, float x2, float y2)
{
    xwmin=x1;
    ywmin=y1;
    xwmax=x2;
    ywmax=y2;
}
void khungnhin(int x1, int y1, int x2, int y2)
{
   // rectangle(x1,y1,x2,y2);
    xvmin=x1;
    yvmin=y1;
    xvmax=x2;
    yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);
}
void chuyenden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);//chuyen con tro chuot den vi tri x,y
    delay(0.1);
}
void veden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);//ve doan thang di qua vi tri hien tai cua con tro toi diem x,y
    delay(0.1);
}

void vedothi(float xmin, float xmax)
{
    float dx=0.01;
    float x=xmin;
    float y=-x*x*x+3*x*x;
    chuyenden2D(x,y);
    //delay(0.1);
    while (x<=xmax)
    {
        x=x+dx;
        y=-x*x*x+3*x*x;
        veden2D(x,y);
    }
}
void trucxoy()
{
    //vẽ trục Ox
    chuyenden2D(xwmin,0);
    veden2D(xwmax,0);
    //vẽ trục Oy
    chuyenden2D(0,ywmin);
    veden2D(0,ywmax);
   //mũi tên 0y
    chuyenden2D(-0.15,ywmax-0.15);
    veden2D(0,ywmax);
    chuyenden2D(0.15,ywmax-0.15);
    veden2D(0,ywmax);
    //mũi tên 0x
    chuyenden2D(xwmax-0.15,-0.15);
    veden2D(xwmax,0);
    chuyenden2D(xwmax-0.15,0.15);
    veden2D(xwmax,0);
    //đoạn
    for(int i=xwmin; i<=xwmax; i++)
    {
        chuyenden2D(i,0.1);
        veden2D(i,-0.1);
    }
    //đoạn
    for(int i=ywmin; i<=ywmax; i++)
    {
        chuyenden2D(0.1,i);
        veden2D(-0.1,i);
    }
}
//Hàm viết chữ 2D

int main()
{
    initwindow(600,600);
   // cuaso(-1, 0, 3 ,4 );
   cuaso(-4,-3,5,7);
    khungnhin(100,150,325,10*25+150);
    trucxoy();
    setcolor(3);
    vedothi(-1,3);
    setcolor(10);
    getch();
    closegraph();
}
