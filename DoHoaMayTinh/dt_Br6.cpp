#include<graphics.h>
void dt_Br6(int xa, int ya, int xb, int yb)
{
    if(ya>yb)
    {
        int tg=xa; xa=xb; xb=tg;
        tg=ya; ya=yb; yb=tg;
    }
    int dx=xb-xa; int dy=ya-yb;
    int const1=2*dx; int const2=2*dx+2*dy;
    int p=2*dx+dy;
    int x=xa;
    int mau=getcolor();
    for(int y=ya; y<=yb; y++ )
    {
        putpixel(x,y,mau);
        if (p<0)
        {
            x--;
            p=p+const2;
        }
        else
            p=p+const1;
    }
}
int main()
{
    initwindow(640,480);
    setcolor(15);
    dt_Br6(100,400,450,250);
    getch();
    closegraph();
}
