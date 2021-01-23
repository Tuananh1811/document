
#define _USE_MATH_DEFINES
#include<graphics.h>
#include<conio.h>
#include<math.h>

#define Round(a) (int)(a+0.5)
const float p=M_PI;
int c=0;

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
    }
}

void Bresenham(int x1, int y1, int x2, int y2)
{
    int dx=x2-x1, dy=y2-y1;
    if(dx>0&&dy>0&&dy<=dx)
        Bresenham1(x1, y1, x2, y2);
    if(dx>=0&&dy>0&&dy>dx)
        Bresenham2(x1, y1, x2, y2);
    if(dx<0&&dy>0&&dy>=abs(dx))
        Bresenham3(x1, y1, x2, y2);
    if(dx<0&&dy>=0&&abs(dx)>dy)
        Bresenham4(x1, y1, x2, y2);
    if(dy<0&&dx<0&&abs(dx)>=abs(dy))
        Bresenham5(x1, y1, x2, y2);
    if(dy<0&&dx<=0&&abs(dx)<abs(dy))
        Bresenham6(x1, y1, x2, y2);
    if(dx>0&&dy<0&&dx<=abs(dy))
        Bresenham7(x1, y1, x2, y2);
    if(dx>0&&dy<=0&&dx>abs(dy))
        Bresenham8(x1, y1, x2, y2);
}

int main()
{
    int gr_drive = DETECT, gr_mode;
    initgraph(&gr_drive, &gr_mode, "");

    //Ve hinh ngoi sao
    c=3;
    Bresenham(188,80,230,204);
    Bresenham(230,204,370,204);
    Bresenham(370,204,256,282);
    Bresenham(256,282,300,407);
    Bresenham(300,407,188,330);
    Bresenham(188,330,78,407);
    Bresenham(78,407,120,282);
    Bresenham(120,282,8,204);
    Bresenham(8,204,146,204);
    Bresenham(146,204,188,80);

    //Ve hinh 2
    c=4;
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

    //Ve hinh 3
    c=8;
    int a=250,b=750, R=200,r=175;
    float alpha=0, beta=p/36, A[36][2], B[36][2];
    for(int i=0; i<36; i++)
    {
        A[i][0]=a+R*sin(alpha);
        A[i][1]=b-R*cos(alpha);
        B[i][0]=a+r*sin(beta);
        B[i][1]=b-r*cos(beta);
        alpha+=p/18;
        beta+=p/18;
    }
    for(int i=0; i<36; i++)
    {
        Bresenham(Round(A[i][0]), Round(A[i][1]), Round(B[i][0]), Round(B[i][1]));
        if(i<35)
            Bresenham(Round(B[i][0]), Round(B[i][1]), Round(A[i+1][0]), Round(A[i+1][1]));
    }
    Bresenham(Round(A[0][0]), Round(A[0][1]), Round(B[35][0]), Round(B[35][1]));

    //Ve hinh 4
    c=10;
    Bresenham(658,537,724,447);
    Bresenham(724,447,720,532);
    Bresenham(720,532,795,516);
    Bresenham(795,516,765,563);
    Bresenham(765,563,846,577);
    Bresenham(846,577,783,617);
    Bresenham(783,617,852,662);
    Bresenham(852,662,772,657);
    Bresenham(772,657,792,739);
    Bresenham(792,739,718,686);
    Bresenham(718,686,703,766);
    Bresenham(703,766,654,692);
    Bresenham(654,692,615,798);
    Bresenham(615,798,602,703);
    Bresenham(602,703,548,731);
    Bresenham(548,731,563,675);
    Bresenham(563,675,462,682);
    Bresenham(462,682,529,639);
    Bresenham(529,639,459,586);
    Bresenham(459,586,546,569);
    Bresenham(546,569,468,485);
    Bresenham(468,485,595,546);
    Bresenham(595,546,614,484);
    Bresenham(614,484,658,537);



    getch();
    closegraph();
}
