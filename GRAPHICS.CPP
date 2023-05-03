#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd = DETECT, gm;
initgraph(&gd,&gm, "C:\\Turboc3\\bgi");


int x=320, y=240;

setcolor(RED);
settextstyle(6,HORIZ_DIR,4);
outtextxy(x-50,y-60,"You are");
settextstyle(6,HORIZ_DIR,4);
outtextxy(x-20,y-30,"doing");
settextstyle(6,HORIZ_DIR,3);
outtextxy(x-60,y,"your best");
settextstyle(6,HORIZ_DIR,3);
outtextxy(x-80,y+20,"everyday");
circle(320,240,150);


//bar(100,100,120,150);
getch();
closegraph();

}