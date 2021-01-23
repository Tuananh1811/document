#include<graphics.h>
#define Round(a) (int)(a+0.5)
using namespace std;
void DDA(int x1, int y1, int x2, int y2)//A(x1,y1), B(x2,y2) tinh so diem anh dx=x2-x1,dy=y2-y1
{
    float m=(float)(y2-y1)/(x2-x1);
    int x=x1;
    float y=y1;
    putpixel(x,Round(y),15);
    while(x<=x2){
        x++;
        y+=m;
        putpixel(x,Round(y),3);
        delay(1);
    }


}
void drawLineDDA(int xA, int yA, int xB, int yB)
{
    int  dX = xB - xA;
    int dY=yB-yA;
    float steps = max(abs(dX), abs(dY));//A(60,170),B(320,220) dx=260,dy=50=>>dx max=>>step=260
    float x_inc = dX / steps;           //x_intc=1
    float y_inc = dY / steps;           // y_int=50/260=0.19

    float x = xA, y = yA;               //gan

    putpixel(x, y, 4);                  //xac dinh diem dau
    int k = 0;                          //gan k=0

    while (k < steps)                   //vong lap dung neu k<step(260)
	{
        k++;                            //k+=1;
        x += x_inc;                     //x=x+x_inc-gia tri cong vao cho x;
        y += y_inc;

        putpixel(Round(x), Round(y), 4);//lam tron roi ve
        delay(1);
    }
    //                                  k>step=>>thoat khoi vong lap
}
int main(){
    int gr_drive = DETECT, gr_mode;
    initgraph(&gr_drive, &gr_mode, "");
    DDA(50,150,300,200);
    drawLineDDA(60,170,320,220);
    drawLineDDA(160,170,200,220);//dx<dy=>>step =dy=50
    getch();
    closegraph();
}
