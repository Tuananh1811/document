#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void line_th6(int xa,int ya,int xb,int yb)//trường hợp này hệ số góc m>1 và được vẽ từ ox đi xuống về bên phải
{
    if(ya>yb)
    {
        int tg=xa;
        xa=xb;
        xb=tg;
        int tg1=ya;
        ya=yb;
        yb=tg1;
    }
    int dx=xb-xa;
    int dy=yb-ya;
    int const1=2*dx;
    int const2=2*(dx-dy);//chỗ này khác th 4
    int p=2*dx-dy;//chỗ này khác th 4
    int x=xa;
    int y=ya;
    while(y<=yb)
    {
        delay(1);
        putpixel(x,y,3);
        y++;
        if(p<0)
        {
            p+=const1;
        }
        else
        {
            x++;
            p=p+const2;
        }
    }
}
void line_th1(int xa,int ya,int xb,int yb)//đây là trường hợp song song với trục ox và có ya==yb
{
    if(xa>xb)
        {
            int tg=xa;
            xa=xb;
            xb=tg;
            int tg1=ya;
            ya=yb;
            yb=tg1;
        }
        for(int x=xa ; x<=xb ; x++)
        {
            putpixel(x,ya,3);
            delay(1);
        }
}
void line_th2(int xa,int ya,int xb,int yb)//đây là trường hợp song song với trục oy
{
    if(ya>yb)
    {
        int tg=xa;
        xa=xb;
        xb=tg;
        int tg1=ya;
        ya=yb;
        yb=tg1;
    }
    while(ya<=yb)
    {
        delay(1);
        putpixel(xa,ya,3);
        ya++;
    }
}
void line_th3(int xa,int ya,int xb,int yb)///trường hợp này có hệ số góc nằm trong khoảng từ -1<m<0 và vẽ từ trục oy lên
{

    if(xa>xb)
    {
        int tg=xa;
        xa=xb;
        xb=tg;
        int tg1=ya;
        ya=yb;
        yb=tg1;
    }
    int dx=xb-xa;
    int dy=yb-ya;
    int const1=2*dy;
    int const2=2*(dx+dy);
    int p=2*dy+dx;//để ý p vì có khác nhau
    int x=xa;
    int y=ya;
    while(x<=xb)//cái này chạy theo x
    {
        delay(1);
        putpixel(x,y,3);
        x++;
        if(p>=0)//khác th 5 ở chỗ này
        {
            p+=const1;

        }
        else
        {
            p+=const2;
            y--;
        }
    }
}
void line_th5(int xa,int ya,int xb,int yb)//trường hợp hệ số góc m>=1 và vẽ từ trục oy đi xuống và nó chạy dọc
{
     if(xa>xb)
        {
            int tg=xa;
            xa=xb;
            xb=tg;
            int tg1=ya;
            ya=yb;
            yb=tg1;
        }
    int dx=xb-xa;
    int dy=yb-ya;
    int const1=2*dy;
    int const2=2*(dy-dx);//cái này khác 3
    int p=2*dy-dx;//cái này cũng khác 3
    int x=xa;
    int y=ya;
    while(x<=xb)
    {
        delay(1);
        putpixel(x,y,3);
        x++;
        if(p<0)
        {
            p+=const1;
        }
        else
        {
            p+=const2;
            y++;
        }
    }

}
void line_th4(int xa,int ya,int xb,int yb)//trường hợp có hệ số góc m<-1 và nó bắt đầu vẽ từ trục ox đi xuống về bên trái
{
    if(ya>yb)
    {
        int tg=xa;
        xa=xb;
        xb=tg;
        int tg1=ya;
        ya=yb;
        yb=tg1;
    }
    int dx=xb-xa;
    int dy=yb-ya;
    int const1=2*dx;
    int const2=2*(dx+dy);
    int p=2*dx+dy;
    int x=xa;
    int y=ya;
    for(int i=y;i<=yb;i++)//cái này chạy theo y
    {
       delay(1);
        putpixel(x,i,3);
        if(p<0)
        {

            p+=const2;
            x--;
        }
        else
        {
            p+=const1;
        }
    }

}
int main()
{
    initwindow(600,600);
    //line_th6(280,300,180,100);///180,100,280,300
    //line_th1(130,200,330,200);
    //line_th2(230,100,230,300);
    //line_th4(180,300,280,100);///280.100.180.300
    line_th3(100,250,400,200);
    //line_th5(300,250,100,150);///100,150,300,250
    //line_th6(300,250,100,150);
   // line_th5(50,100,100,200);
    getch();
}




































