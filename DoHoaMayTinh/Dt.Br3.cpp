#include<graphics.h>
void dt_Br3(int xa,int ya, int xb, int yb)
{
    if(xa>xb)
    {
        int tg=xa; xa=xb; xb=tg;
        tg=ya; ya=yb; yb=tg;
    }
    int dx=xb-xa; int dy=yb-ya;
    int const1= 2*dy-2*dx;
    int const2=2*dy;
    int p=2*dy-dx;
    int x=xa;   int y=ya;
    int mau=getcolor();
    for(int x=xa;x<=xb;x++)
    {
        putpixel(x,y,mau);
        if(p>0)
        {

            p=p+const1;
            y++;
        }
        else
            p=p+const2;
    }

}
int main()
{
    initwindow(640,480);
    setcolor(15);
    dt_Br3(300,250,100,150);
    getch();
    closegraph();
}

