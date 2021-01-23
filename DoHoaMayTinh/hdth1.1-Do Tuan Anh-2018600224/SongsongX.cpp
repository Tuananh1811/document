#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;
void SongsongX(int x1,int y1,int x2,int y2){
    int x=x1;
    int y=y1;
    while(x<=x2){
        putpixel(x,y,3);
        x++;
        delay(1);
    }
}
int main(){
    	int gr_drive = DETECT, gr_mode;
        initgraph(&gr_drive, &gr_mode, "");
        SongsongX(0,100,300,300);
        getch();
        closegraph();
}

