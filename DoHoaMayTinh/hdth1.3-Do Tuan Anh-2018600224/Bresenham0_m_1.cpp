#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

void Bresenham0_m_1(int x1, int y1, int x2, int y2){
    int dx= x2-x1;
    int dy= y2-y1;
    int p= 2*dy-dx;
    int const1 = 2*dy;
    int const2= 2*(dy-dx);
    int x=x1;
    int y=y1;
    putpixel(x,y,4);
    while(x<=x2){
        if(p<0){
            p+=const1;
        }
        else{
            p+=const2;
            y++;
        }
        x++;
        putpixel(x,y,4);
        delay(1);
    }
}
int main(){
    int gr_drive = DETECT, gr_mode;
    initgraph(&gr_drive, &gr_mode, "");
    Bresenham0_m_1(100,100,200,300);
    getch();
    closegraph();
}
