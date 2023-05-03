#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd = DETECT, gmode, x, y, i;
	initgraph(&gd, &gmode, "c:\\turboc3\\bgi");
	x = getmaxx()/2;
	y = getmaxx()/2;

	for(i=20; i<200; i++)
	{
		setcolor(i/10);
		arc(x,y,0,180,10+i);
		delay(50);
	}
	getch();
	closegraph();
}