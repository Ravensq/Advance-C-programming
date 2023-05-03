#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	int centerX = getmaxx() /2;
	int centerY = getmaxx() /2;
	int radius = 100;
	int x = 0, y = radius;
	int p = 1 - radius;

   while(x < y) {
		putpixel(centerX + x, centerY + y, WHITE);
		putpixel(centerX - x, centerY + y, WHITE);
		putpixel(centerX + x, centerY - y, WHITE);
		putpixel(centerX - x, centerY - y, WHITE);
		putpixel(centerX + y, centerY + x, WHITE);
		putpixel(centerX - y, centerY + x, WHITE);
		putpixel(centerX + y, centerY - x, WHITE);
		putpixel(centerX - y, centerY - x, WHITE);

	   x++;
	   if(p < 0)
	   {
		p+= 2 * x + 1;
	   } else {
		y--;
		p += 2 * (x -y) + 1;
	   }

	}

	getch();
	closegraph();
}