#include<iostream>
#include<graphics.h>
#include<math.h>
#define pi 3.14 //da them
float xwmin, ywmin, xwmax, ywmax;
float tlx, tly;
int xvmin, yvmin, xvmax, yvmax;

void cuaso(float x1, float y1, float x2, float y2)
{
    xwmin=x1; ywmin=y1;
    xwmax=x2; ywmax=y2;
}
void khungnhin(int x1, int y1, int x2, int y2)
{
    xvmin=x1; yvmin=y1;
    xvmax=x2; yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);
}
void chuyenden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);
}
void veden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);
}
void vedothi(float xmin, float xmax)
{
    float dx=0.01;
    float x=xmin;
    float y=1-cos(x);
    chuyenden2D(x,y);
while (x<=xmax)
   {
    x=x+dx;
    y=1-cos(x);
    veden2D(x,y);
   }
}
void trucoxoy()
{
    chuyenden2D(xwmin,0);
    veden2D(xwmax,0);
    chuyenden2D(0,ywmin);
    veden2D(0,ywmax);
    chuyenden2D(-0.15,ywmax-0.15);
    veden2D(0,ywmax);
    veden2D(0.15,ywmax-0.15);
    chuyenden2D(xwmax-0.15,-0.15);
    veden2D(xwmax,0);
    veden2D(xwmax-0.15,0.15);
    for(int i=xwmin;i<=xwmax;i=i+1){
        chuyenden2D(i,0.1);
        veden2D(i,-0.1);
    }
    for(int i=ywmin;i<=ywmax;i=i+1){
        chuyenden2D(0.1,i);
        veden2D(-0.1,i);
    }
}
int main()
{
    initwindow(600,600);
    cuaso(0,-4,2*pi,2);
    khungnhin(100,150,50*pi+100,300);
    trucoxoy();
    setcolor(4);
    vedothi(0,2*pi);//da sua
    setcolor(10);
    getch();
    closegraph();
}
