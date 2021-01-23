#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

void Bresenham1_m(int x1, int y1, int x2, int y2){
    int dx= x2-x1;
    int dy= y2-y1;
    int p= 2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1;
    int y=y1;
    putpixel(x,y,4);
    while(y<=y2){
        if(p<0){
            p+=const1;
        }
        else{
            p+=const2;
            x++;
        }
        y++;
        putpixel(x,y,4);
        delay(1);
    }
}
int main(){
    int gr_drive = DETECT, gr_mode;
    initgraph(&gr_drive, &gr_mode, "");
    Bresenham1_m(300,50,400,400);//m<1
    getch();
    closegraph();

}
