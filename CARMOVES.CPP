#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
	int j, i, gd = DETECT, gm;
	initgraph(&gd,&gm, "c:\\turboc3\\bgi");
	int poly[18]={100,100,70,150,300,150,270,100,240,100,200,80,170,80,130,100,100,100};
	setbkcolor(WHITE);
	setcolor(RED);
	for(i=0;i<=200;i=i+2)
	{
	for(j=0;j<=18;j=j+2)
	{
	poly[j]=poly[j]+2;
	}
	setfillstyle(1, RED);
	fillpoly(9, poly);
	circle(150+i, 150, 15);
	circle(150+i, 150, 16);
	circle(150+i, 150, 17);
	circle(150+i, 150, 18);
	circle(220+i, 150, 15);
	circle(220+i, 150, 16);
	circle(220+i, 150, 17);
	circle(220+i, 150, 18);
	delay(50);
	cleardevice();
	}

	getch();
	closegraph();
	}