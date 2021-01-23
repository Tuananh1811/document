/*TH3: 0<m<=1
    b1: Nếu xa>xb: Hoán đổi a,b;
    b2: dx=xb-xa;   dy=yb-ya;
        const1=2dy; const2=2dy-2dx;
        p=2dy-dx;
        x=xa;   y=ya;
    b3: vẽ điểm (x,y);
    b4: x=x+1;
    b5: nếu p<0 thì:
                p=p+const1;
        Ngược lại:
                p=p+const2;
                y=y+1;
    b6: Nếu x<=xb: bước 3;
    b7: Kết thúc;
*/
#include<graphics.h>
void Br3(int xa, int ya, int xb, int yb)
{
    if(xa>xb)
    {
        int tg=xa;
        xa=xb;
        xb=tg;

        tg=ya;
        ya=yb;
        yb=tg;
    }
    int dx=xb-xa;   int dy=yb-ya;
    int const1= 2*dy;   int const2=2*dy-2*dx;
    int p=2*dy-dx;
    int y=ya;
    int mau=getcolor();
    for(int x=xa; x<=xb;x++)
    {
        putpixel(x,y,mau);
        if(p<0)
            p=p+const1;
        else{
            p=p+const2;
            y++;
        }

    }
}
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm, "");
    setcolor(15);
    Br3(150,200,350,350);
    getch();
    closegraph();
}
