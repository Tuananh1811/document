/*TH4: -1<=m<0
B1:Nếu xa>xb: Hoán đổi a,b;
B2: dx=xb-xa;   dy=yb-ya;
    const1= 2dy;    const2= 2dy+2dx;
    p=2dy+dx;   x=xa;   y=ya;
B3: Vẽ điểm (x,y);
B4: x=x+1;
B5: Nếu p<0 thì:
                p=p+const2;
                y=y-1;
    Ngược lại:  p=p+const1;
B6: Nếu x<=xb: Quay lại B3;
B7: Kết thúc;
*/
#include<graphics.h>
void Br4(int xa, int ya, int xb, int yb)
{
    int mau=getcolor();
    if(xa>xb)
    {
        int tg=xa;  xa=xb;  xb=tg;
        tg=ya;  ya=yb;  yb=tg;
    }
    int dx=xb-xa;   int dy=yb-ya;
    int const1= 2*dy;   int const2= 2*dy+2*dx;
    int p= 2*dy+dx;
    int y=ya;
    for(int x=xa; x<=xb; x++)
    {
        putpixel(x,y,mau);
        if(p<0)
        {
            p=p+const2;
            y--;
        }
        else
            p=p+const1;
    }
}
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    setcolor(7);
    Br4(500,300,300,400);
    getch();
    closegraph();
}
