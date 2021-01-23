#include<graphics.h>
#include<conio.h>
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
        delay(1);
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
        delay(1);
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
        delay(1);
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
        delay(1);
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
        delay(1);
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
       delay(1);
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
        delay(1);
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
        delay(1);
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
	Bresenham1(300,300,450,400);
	Bresenham2(300,300,300,450);
	Bresenham3(300,300,200,400);
	Bresenham4(300,300,150,100);
	Bresenham5(300,300,150,200);
	Bresenham6(300,300,200,150);
	Bresenham7(300,300,300,150);
	Bresenham8(300,300,400,150);

    getch();
    closegraph();
}

