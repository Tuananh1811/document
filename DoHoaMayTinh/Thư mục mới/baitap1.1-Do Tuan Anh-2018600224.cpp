#include<graphics.h>
#include<conio.h>
#include<bits/stdc++.h>
void Bresenham1x(int x1, int y1,int x2,int y2)//0<m<1
{
    int dx=x2-x1;
    int dy=y2-y1;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,3);

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
        putpixel(x,y,3);
    }
}
void Bresenham1y(int x1, int y1,int x2,int y2)//m>1
{
    int dx=x2-x1;
    int dy=y2-y1;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,4);

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
        putpixel(x,y,4);
    }
}
void Bresenham2y(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y2-y1;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,4);

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
        putpixel(x,y,4);
    }
}
void Bresenham2x(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y2-y1;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,3);

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
        putpixel(x,y,3);
    }
}
void Bresenham3x(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y1-y2;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,3);

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
        putpixel(x,y,3);
    }
}
void Bresenham3y(int x1, int y1,int x2,int y2)
{
    int dx=x1-x2;
    int dy=y1-y2;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,4);

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
        putpixel(x,y,4);
    }
}
void Bresenham4y(int x1, int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y1-y2;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,4);

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
        putpixel(x,y,4);
    }
}
void Bresenham4x(int x1, int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y1-y2;
    int p= 2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,3);

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
        putpixel(x,y,3);
    }
}
int main()
{
    //initwindow(1000,1000);
    int gr_drive = DETECT, gr_mode;
    initgraph(&gr_drive, &gr_mode, "");
    Bresenham1x(300,300,450,400);
    Bresenham1y(300,300,450,600);
    Bresenham2x(300,300,150,400);
    Bresenham2y(300,300,150,600);
    Bresenham3x(300,300,150,250);
    Bresenham3y(300,300,150,100);
    Bresenham4x(300,300,450,250);
    Bresenham4y(300,300,450,100);
    getch();
    closegraph();
}
