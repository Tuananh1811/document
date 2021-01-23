#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<bits/stdc++.h>
#define Round(a) (int)(a+0.5)
int c=4;
void Bresenham1(int x1, int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y2-y1;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(x<=x2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            y++;
        }
        x++;
        putpixel(x,y,c);
        //delay(1);
    }
}
void Bresenham2(int x1, int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y2-y1;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(y<=y2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            x++;
        }
        y++;
        putpixel(x,y,c);
        //delay(1);
    }
}
void Bresenham3(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y2-y1;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(y<=y2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            x--;
        }
        y++;
        putpixel(x,y,c);
       // delay(1);
    }
}
void Bresenham4(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y2-y1;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(x>=x2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            y++;
        }
        x--;
        putpixel(x,y,c);
       // delay(1);
    }
}
void Bresenham5(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y1-y2;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(x>=x2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            y--;
        }
        x--;
        putpixel(x,y,c);
       // delay(1);
    }
}
void Bresenham6(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y1-y2;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(y>=y2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            x--;
        }
        y--;
       putpixel(x,y,c);
       //delay(1);
    }
}
void Bresenham7(int x1, int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y1-y2;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(y>=y2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            x++;
        }
        y--;
        putpixel(x,y,c);
      //  delay(1);
    }
}
void Bresenham8(int x1, int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y1-y2;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,c);

    while(x<=x2)
    {

        if(p<0)
            p+= const1;
        else
        {
            p+=const2;
            y--;
        }
        x++;
        putpixel(x,y,c);
       // delay(1);
    }
}
void Bresenham(int x1, int y1, int x2, int y2)
{
    int dx=x2-x1, dy=y2-y1;
    if(dx>0 && dy>0 && dy<=dx)
        Bresenham1(x1, y1, x2, y2);
    if(dx>=0 && dy>0 && dy>dx)
        Bresenham2(x1, y1, x2, y2);
    if(dx<0 && dy>0 && dy>=abs(dx))
        Bresenham3(x1, y1, x2, y2);
    if(dx<0 && dy>=0 && abs(dx)>dy)
        Bresenham4(x1, y1, x2, y2);
    if(dy<0 && dx<0 && abs(dx)>=abs(dy))
        Bresenham5(x1, y1, x2, y2);
    if(dy<0 && dx<=0 && abs(dx)<abs(dy))
        Bresenham6(x1, y1, x2, y2);
    if(dx>0 && dy<0 && dx<=abs(dy))
        Bresenham7(x1, y1, x2, y2);
    if(dx>0 && dy<=0 && dx>abs(dy))
        Bresenham8(x1, y1, x2, y2);
}
int main()
{
    initwindow(1000,1000);
    //ngoi sao
	Bresenham(282,153,316,248);
    Bresenham(316,248,413,251);
    Bresenham(413,251,336,307);
    Bresenham(336,307,367,400);
    Bresenham(367,400,284,345);
    Bresenham(284,345,204,400);
    Bresenham(204,400,229,310);
    Bresenham(229,310,152,250);
    Bresenham(152,250,252,249);
    Bresenham(252,249,282,153);
    //hinh tu do 1
    Bresenham(466,225,529,161);
    Bresenham(529,161,529,193);
    Bresenham(529,193,567,193);
    Bresenham(567,193,567,143);
    Bresenham(567,143,628,143);
    Bresenham(628,143,628,117);
    Bresenham(628,117,597,117);
    Bresenham(597,117,660,55);
    Bresenham(660,55,723,117);
    Bresenham(723,117,691,117);
    Bresenham(691,117,691,143);
    Bresenham(691,143,753,143);
    Bresenham(753,143,753,193);
    Bresenham(753,193,791,193);
    Bresenham(791,193,791,161);
    Bresenham(791,161,854,225);
    Bresenham(854,225,790,288);
    Bresenham(790,288,790,256);
    Bresenham(790,256,753,256);
    Bresenham(753,256,753,307);
    Bresenham(753,307,691,307);
    Bresenham(691,307,691,332);
    Bresenham(691,332,724,332);
    Bresenham(724,332,660,395);
    Bresenham(660,395,597,332);
    Bresenham(597,332,628,332);
    Bresenham(628,332,628,307);
    Bresenham(628,307,567,307);
    Bresenham(567,307,567,256);
    Bresenham(567,256,529,256);
    Bresenham(529,256,529,288);
    Bresenham(529,288,466,225);
    //hinh tu do 2
    //hinh tu do 3
   Bresenham(488,425,567,556);
   Bresenham(567,556,567,416);
   Bresenham(567,416,757,483);
   Bresenham(757,483,760,691);
    Bresenham(760,691,797,709);
    Bresenham(797,709,400,604);
     Bresenham(400,604,488,425);

    getch();
    closegraph();
}


