#include<graphics.h>

#include<conio.h>
#include<math.h>
using namespace std;
float xwmin, ywmin, xwmax, ywmax;
float tlx, tly;
int xvmin,yvmin, xvmax, yvmax;
void cuaso(float x1,float y1, float x2, float y2)
{
    xwmin=x1;   ywmin=y1;
    xwmax=x2;   ywmax=y2;
}
void khungnhin(int x1, int y1, int x2, int y2)
{
    rectangle(x1,y1,x2,y2);
    xvmin=x1;   yvmin=y1;
    xvmax=x2;   yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);
}
void chuyenden2D(float x, float y)
{

    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym=(int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);
}
void veden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym=(int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);
}

void tinhtien(float x, float y, float m, float n, float &x1, float &y1)
{
    x1=x+m;
    y1=y+n;
}
void doixungOx(float x, float y, float &x1, float &y1)
{
    x1=x;   y1=-y;
}
//d: y=y0 //Ox
void doixungdssOx(float x, float y,float y0, float &x1, float &y1)
{
    float x11,y11,x12,y12;
    tinhtien(x,y,0,-y0,x11,y11);
    doixungOx(x11,y11,x12,y12);
    tinhtien(x12,y12,0,y0,x1,y1);
}
void vetoado()
{
    chuyenden2D(-9,0);
    veden2D(12,0);
    chuyenden2D(0,-6);
    veden2D(0,6);
    float m=1;
    float n=0.15;
    //ve mui ten cua truc x
    chuyenden2D(12*m-n,n);
    veden2D(12*m,0);
    chuyenden2D(12*m-n,-n);
    veden2D(12*m,0);
    //ve mui ten truc y:
    chuyenden2D(n,6*m-n);
    veden2D(0,6*m);
    chuyenden2D(-n,6*m-n);
    veden2D(0,6*m);
    //chia đoạn Ox:
    for(int i=-9;i<12;i++)
    {
        chuyenden2D(i*m,-n);
        veden2D(i*m,n);
    }

    //chia doan Oy:
    for(int i=-5;i<=5;i++)
    {
        chuyenden2D(-n,i*m);
        veden2D(n,i*m);
    }

}
void vedothi(float xmin, float xmax)
{
    float dx=0.01;
    float x=xmin;   float y=sin(x);
    chuyenden2D(x,y);
    for(x=xmin;x<=xmax;x+=dx)
    {
        y=sin(x);
        veden2D(x,y);
    }
}
void veanhdothi(float xmin, float xmax)
{
    float dx=0.01;
    float x=xmin;
    float y=sin(x);
    float x1, y1;
    doixungdssOx(x,y,-1,x1,y1);
    chuyenden2D(x1,y1);
    for(x=xmin;x<=xmax;x+=dx)
    {
        y=sin(x);
        doixungdssOx(x,y,-1,x1,y1);
        veden2D(x1,y1);
    }
}
void vietchu2D(float x, float y, char *s)
{
    outtextxy(x,y,s);
}
int main()
{
    int gd=0, gm;
    initgraph(&gd,&gm," ");
    cuaso(-3*M_PI, -7,4*M_PI, 7);
    khungnhin(50,50,600,400);
    setcolor(15);
    vetoado();
    setcolor(10);
    vedothi(-2*M_PI,3*M_PI);
    setcolor(11);
    veanhdothi(-2*M_PI,3*M_PI);
    vietchu2D(270,160,"O");
    vietchu2D(580,160,"x");
    vietchu2D(270,60,"y");
    getch();
    closegraph();
}
