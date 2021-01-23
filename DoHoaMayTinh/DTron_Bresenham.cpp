/*Thuật toán vẽ đường tròn tâm O:
Bước 1: x=0; y=R; p=3-2R;
Bước 2: Vẽ 8 điểm:
    M1(x,y);    M2(y,x);    M3(y,-x);   M4(x,-y);
    M5(-x,-y);  M6(-y,-x);  M7(-y,x);   M8(-x,y);
Bước 3: Nếu p>0 thì p=p+4(x-y)+10;
                    y=y-1;
        Còn lại:    p=p+4x+6;
Bước 4: x=x+1;
Bước 5: Nếu x<=y: Bước 2;
Bước 6: kết thúc;
*/
#include<graphics.h>
void ve8diem(int x, int y, int xa, int ya,int color)
{
    putpixel(x+xa,y+ya, color);
    putpixel(y+xa, x+ya,color);
    putpixel(y+xa, -x+ya,color);
    putpixel(x+xa,-y+ya, color);
    putpixel(-x+xa,-y+ya, color);
    putpixel(-y+xa, -x+ya,color);
    putpixel(-y+xa, x+ya,color);
    putpixel(-x+xa,y+ya, color);

}
void DuongTron_Br(int xa, int ya, int R)
{
    int y=R;
    int p=3-2*R;
    int mau=getcolor();
    for(int x=0; x<=y; x++)
    {
        ve8diem(x,y,xa,ya,mau);
        if(p>0)
        {
            p=p+4*(x-y)+10;
            y--;
        }
        else
            p=p+4*x+6;
    }

}
int main()
{
    int gd=0, gm;
    initgraph(&gd, &gm, "");
    setcolor(15);
    DuongTron_Br(100,200,70);
    getch();
    closegraph();
}
