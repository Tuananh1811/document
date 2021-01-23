/* TH6: m<-1
B1: Nếu ya>yb: Hoán đổi a, b;
B2: dx=xb-xa;   dy=yb-ya;
    const1= 2dx;    const2= 2dx+2dy;
    p=2dx+dy;
    x=xa; y=ya;
B3: Vẽ điểm (x,y);
B4: y=y+1;
B5: Nếu p<0: p=p+const2;
             x=x-1;
    Còn lại: p=p+const1;
B6: Nếu y<=yb: quay lại B3;
B7: Kết thúc;
*/
#include<graphics.h>
void Br6(int xa, int ya, int xb, int yb)
{
    if(ya>yb)
    {
        int tg=xa;  xa=xb;  xb=tg;
        tg=ya;      ya=yb;  yb=tg;
    }
    int dx=xb-xa;   int dy=yb-ya;
    int const1= 2*dx;   int const2= 2*dx+2*dy;
    int p=2*dx+dy;
    int x=xa;
    int mau=getcolor();
    for(int y=ya; y<=yb; y++)
    {
        putpixel(x,y,mau);
        if(p<0)
        {
            p=p+const2;
            x--;
        }
        else
            p=p+const1;
    }
}
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm, "");
    setcolor(12);
    Br6(400,100,250,300);
    getch();
    closegraph();
}
