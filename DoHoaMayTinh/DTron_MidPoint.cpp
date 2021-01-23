/*Thuật toán:
Bước 1: x=0;    y=R;    p=1-R;
Bước 2: Vẽ 8 điểm:
        M1(x,y);    M2(y,x);
        M3(y,-x);   M4(x,-y);
        M5(-x,-y);  M6(-y,-x);
        M7(-y,x);   M8(-x,y);
Bước 3: Nếu p>0 thì:
                p=p+2(x-y)+5;
                y=y-1;
        Còn lại:
                p=p+2x+3;
Bước 4: x=x+1;
Bước 5: Nếu x<=y: Bước 2;
Bước 6: Kết thúc;
*/
#include<graphics.h>
void ve8diem(int x, int y, int xa, int ya, int color)
{
    putpixel(x+xa,y+ya,color);
    putpixel(y+xa,x+ya,color);
    putpixel(y+xa,-x+ya,color);
    putpixel(x+xa,-y+ya,color);
    putpixel(-x+xa,-y+ya,color);
    putpixel(-y+xa,-x+ya,color);
    putpixel(-y+xa,x+ya,color);
    putpixel(-x+xa,y+ya,color);

}
void DTron_Midpoint(int xa, int ya, int R)
{
    int y=R;   int p=1-R;
    int mau=getcolor();
    for(int x=0; x<=y; x++)
    {
        ve8diem(x,y,xa,ya,mau);
        if(p>0)
        {
            p=p+2*(x-y)+5;
            y--;
        }
        else{
            p=p+2*x+3;
        }
    }
}
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm, "");
    setcolor(5);
    DTron_Midpoint(150,200,50);
    getch();
    closegraph();

}
