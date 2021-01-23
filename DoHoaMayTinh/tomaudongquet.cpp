#include <iostream>
#include<graphics.h>

 void loang(int x, int y, int mt, int mb){
    if(getpixel(x,y)!=mb && getpixel(x,y)!=mt){
        putpixel(x,y,mt);
        loang(x-1,y,mt,mb);
        loang(x+1,y,mt,mb);
        loang(x,y-1,mt,mb);
        loang(x,y+1,mt,mb);
        delay(10);
    }
 }

 void bien(int x, int y, int mt, int mb){
    int x1, x2;
    do{
        x1=x;
        x2=x;
        while(getpixel(x1-1,y)!=mb){
            x1--;
        }
        while(getpixel(x2+1,y)!=mb){
            x2++;
        }
        for(int i=x1;i<=x2;i++){
            putpixel(i,y,mt);
            delay(10);
        }
        while(getpixel(x1,y-1)==mb){
            x1++;
        }
        if(x1<=x2){
            x=x1;
            y=y-1;
        }
    }while(x1<=x2);

 }

 //hinh thang

 void Hinhthang_x(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int mauto)
{
    //          x1y1        x2y2
    //
    //     x4y4                    x3y3

    float xl, xr, cl, cr;
    cl=(x4-x1)/(y4-y1);
    cr=(x3-x2)/(y3-y2);

    float y= y1+1;
    while(y<=y4){
        xl= cl*(y-y1)+ x1;
        xr=cr*(y-y2) +x2;

        line(int(xl),y, int(xr), y);
        y++;
    }
}

// Sinh viên tự viết tô màu theo chiều y
void Hinhthang_y(float xmin, float xmax, float ya, float yb, float yc, float yd, int mt){
    float m1, m2, ym1, ym2;

    m1= (yd-ya)/(xmax-xmin);
    m2= (yc-yb)/(xmax-xmin);

    float x=xmin;

    while(x<=xmax){
        ym1 = m1*(x-xmin) + ya;
        ym2= m2*(x-xmin) + yb;
        setcolor(mt);

        line(x, int(ym1), x , int(ym2));
        delay(10);
        x++;
    }
}

 int main()
{
    initwindow(1000,1000);

    line(100,50,100,450);
    line(100,450,300,400);
    line(300,400,300,100);
    line(300,100,100,50);
    Hinhthang_y(100,300,50,450,400,100,14);

    getch();
}
