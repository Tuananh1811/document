#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<bits/stdc++.h>
#define Round(a) (int)(a+0.5)
int c=5;
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
    Bresenham(203,196,325,187);
    Bresenham(325,187,325,128);
    Bresenham(325,128,309,111);
    Bresenham(309,111,384,89);
    Bresenham(384,89,460,96);
    Bresenham(460,96,439,118);
    Bresenham(439,118,439,180);
    Bresenham(439,180,663,167);
    Bresenham(663,167,882,355);
    Bresenham(882,355,873,368);
    Bresenham(873,368,873,602);
    Bresenham(873,602,493,666);
    Bresenham(493,666,248,661);
    Bresenham(248,661,241,655);
    Bresenham(241,655,167,655);
    Bresenham(167,655,167,660);
    Bresenham(167,660,116,660);
    Bresenham(116,660,116,416);
    Bresenham(116,416,108,405);
    Bresenham(108,405,203,196);
    //vien trong
    Bresenham(206,202,325,194);
    Bresenham(206,202,120,409);
    Bresenham(325,194,325,225);
    Bresenham(325,225,387,225);
    Bresenham(387,225,387,111);
    Bresenham(387,111,431,111);
    Bresenham(431,111,446,101);
    Bresenham(446,101,385,96);
    Bresenham(431,111,431,180);
    Bresenham(387,111,385,96);
    Bresenham(385,96,322,113);
    Bresenham(322,113,333,122);
    Bresenham(333,122,387,111);
    Bresenham(333,122,333,218);
    Bresenham(333,218,386,218);
    Bresenham(386,218,431,180);
    Bresenham(387,225,431,189);
    Bresenham(431,189,658,176);
    Bresenham(658,176,518,409);
    Bresenham(518,409,120,409);
          //
    Bresenham(663,189,523,422);
    Bresenham(663,189,866,366);
    Bresenham(866,366,866,598);
    Bresenham(866,598,532,653);
        //vien mai nha
    Bresenham(523,422,122,422);
        //vien khung nha
    Bresenham(122,422,122,653);
        //vien khung cua
    Bresenham(122,653,159,653);
    Bresenham(159,653,159,464);
    Bresenham(159,464,247,464);
    Bresenham(247,464,246,655);
        //vien trong khung cua
    Bresenham(165,647,165,471);
    Bresenham(165,471,240,471);
    Bresenham(240,471,240,647);
    Bresenham(240,647,165,647);
        //o trong
    Bresenham(175,552,188,552);
    Bresenham(188,552,188,586);
    Bresenham(188,586,175,586);
    Bresenham(175,586,175,552);
         //cua so chinh
    Bresenham(332,481,418,481);
    Bresenham(418,481,410,494);
    Bresenham(412,486,407,492);
    Bresenham(407,492,342,492);
    Bresenham(342,492,339,486);
    Bresenham(339,486,412,486);
    Bresenham(332,481,339,494);
    Bresenham(339,494,339,502);
    Bresenham(339,502,310,502);
    Bresenham(310,502,310,597);
    Bresenham(310,597,339,597);
    Bresenham(339,597,339,600);
    Bresenham(339,600,332,600);
    Bresenham(332,600,332,613);
    Bresenham(332,613,418,613);
    Bresenham(418,613,418,600);
    Bresenham(418,600,443,600);
    Bresenham(443,600,443,501);
    Bresenham(443,501,410,501);
    Bresenham(410,501,410,496);
        //trong cua so
    Bresenham(343,496,404,496);
       // Bresenham(404,496,404,597);
    Bresenham(404,597,417,597);
    Bresenham(410,507,410,594);
    Bresenham(410,594,438,595);
    Bresenham(438,595,438,507);
    Bresenham(438,507,410,507);
    Bresenham(343,496,343,528);
    Bresenham(343,528,371,528);
    Bresenham(371,528,371,497);
    Bresenham(343,534,343,563);
    Bresenham(343,563,371,563);
    Bresenham(371,563,371,534);
    Bresenham(371,534,343,534);
    //
    Bresenham(343,568,343,599);
    Bresenham(343,599,371,599);
    Bresenham(371,599,371,568);
    Bresenham(371,568,343,568);
        //o thu nhat ben phai
    Bresenham(404,496,404,526);
    Bresenham(404,526,377,526);
    Bresenham(377,526,377,495);
        //o thu 2 ben phai
    Bresenham(404,533,404,563);
    Bresenham(404,563,376,563);
    Bresenham(376,563,376,534);
    Bresenham(376,534,404,534);
        //o thu 3 ben phai
    Bresenham(404,569,404,598);
    Bresenham(404,598,376,598);
    Bresenham(376,598,376,569);
    Bresenham(376,569,404,569);
        //
    Bresenham(337,506,337,593);
    Bresenham(337,593,315,593);
    Bresenham(315,593,315,506);
    Bresenham(315,506,337,506);
        //khung nha
    Bresenham(533,653,533,414);
    Bresenham(533,653,515,656);
    Bresenham(513,655,513,425);
    Bresenham(513,655,497,658);
    Bresenham(497,658,497,426);
    Bresenham(497,658,248,656);
        //cua so phu ben hien
    Bresenham(565,475,594,470);
    Bresenham(565,475,565,577);
    Bresenham(565,577,594,572);
    Bresenham(594,572,594,470);
           //
    Bresenham(594,462,594,580);
    Bresenham(594,462,656,456);
    Bresenham(656,456,656,568);
    Bresenham(656,568,594,580);
        //
    Bresenham(657,464,686,460);
    Bresenham(686,460,686,556);
    Bresenham(686,556,656,564);
               //
    Bresenham(603,467,624,466);
    Bresenham(603,467,603,500);
    Bresenham(603,500,624,497);
    Bresenham(624,497,624,466);
              //
    Bresenham(603,505,624,502);
    Bresenham(624,502,624,540);
    Bresenham(624,540,604,543);
    Bresenham(604,543,603,505);
            //
    Bresenham(603,549,603,577);
    Bresenham(603,549,624,545);
    Bresenham(624,573,624,545);
    Bresenham(623,573,603,577);
            //cua ben phai
            //top
    Bresenham(629,465,648,462);
    Bresenham(629,465,629,496);
    Bresenham(649,493,648,462);
    Bresenham(649,493,629,496);
            //center
    Bresenham(629,501,648,498);
    Bresenham(629,501,629,538);
    Bresenham(649,535,648,498);
    Bresenham(649,535,629,538);
            //bottom
    Bresenham(629,544,648,541);
    Bresenham(629,544,629,572);
    Bresenham(648,569,648,541);
    Bresenham(648,569,629,572);
    getch();
    closegraph();
}



