#include<graphics.h>
using namespace std;
void SongsongY(int x1,int y1,int x2,int y2){
    int x=x1;
    int y=y1;
    while(y<=y2){
        putpixel(x,y,3);
        y++;
        delay(1);
    }
}
int main(){
    	int gr_drive = DETECT, gr_mode;
        initgraph(&gr_drive, &gr_mode, "");
         SongsongY(200,100,200,400);
        SongsongY(300,100,300,400);
        getch();
        closegraph();
}
