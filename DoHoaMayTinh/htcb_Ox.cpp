/* Thuat toan to mau htcb
Buoc 1: y=min;
Buoc 2: Tinh xM1,xM2:
    xM1=((xD-xA)/(ymax-ymin))*(y-ymin)+xA;
    yM2=((xC-xD)/(ymax-ymin))*(y-ymin)+xD;
Buoc 3: Noi M1 voi M2 bang mau to
Buoc 4: y=y+1;
Buoc 5: Neu y<=ymax: Quay lai buoc 2;
Buoc 6: Ket Thuc;
*/
#include<graphics.h>
#include<conio.h>
using namespace std;
void tomauHTCB(int ymin, int ymax, int xa, int xb, int xc, int xd, int color)
{
    int xm1; int xm2;
    float m1= (float)(ymax-ymin)/(xd-xa);
    float m2= (float)(ymax-ymin)/(xc-xb);
    int mau=getcolor();
    setcolor(mau);
    for(int y=ymin;y<=ymax;y++)
    {
        xm1=(int)((1/m1)*(y-ymin)+xa+0.5);
        xm2=(int)((1/m2)*(y-ymin)+xb+0.5);
        line(xm1,y,xm2,y);
    }
}
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm,"");
    tomauHTCB(100,400,100,500,400,300,2);
    getch();
    closegraph();
}
