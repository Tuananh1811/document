# include <graphics.h>
# include <math.h>
float  xwmin, ywmin, xwmax, ywmax;
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
    float  y=cos(x)-2;
    chuyenden2D(x,y);
    while (x<=xmax)
        {
            x=x+dx;
            y=cos(x)-2;
            veden2D(x,y);
        }
}
void tinhtien(float x, float y, float m, float n, float &x1, float &y1)
{
    x1=x+m;
    y1=y+n;
}
void doixungOx(float x,float y, float &x1, float &y1)
{
    x1=0;
    y1=-1;
}
//d: y=y0 //Ox
void doixungdssOx(float x, float y, float y0, float &x1, float &y1)
{
    float x11, y11, x12, y12;
    tinhtien(x,y,0,-y0,x11,y11);
    doixungOx(x11,y11,x12,y12);
    tinhtien(x12,y12,0,y0,x1,y1);
}
void veanhdothi(float xmin, float xmax)
{
    float dx=0.01;
    float x=xmin;
    float  y=cos(x)-2;
    float x1, y1;
    doixungdssOx(x,y,-1, x1, y1);
    chuyenden2D(x1,y1);
    while (x<=xmax)
        {
            x=x+dx;
            y=sin(x);
            doixungdssOx(x,y,-1, x1, y1);
            veden2D(x1,y1);
        }
}
void Songsong_Ox(int x1, int y1, int x2, int y2)
{
    int x=x1;
    int y=y1;
    while (x<=x2)
        {
            putpixel(x,y,3);
            x++;
            delay(1);
        }
}
void Songsong_Oy(int x1, int y1, int x2, int y2)
{
    int x=x1;
    int y=y1;
    while (y<=y2)
        {
            putpixel(x,y,3);
            y++;
            delay(1);
        }
}
int main()
{
    initwindow(600, 600);
    cuaso(0, -5, 2*M_PI, 0);
    khungnhin(500,400,700,650);
    setcolor(2);
    vedothi(-2*M_PI, 3*M_PI);
    veanhdothi(-2*M_PI, 3*M_PI);
    Songsong_Ox(0,400,800,300);
    Songsong_Oy(500,0,200,700);
    getch();
    closegraph();

}
