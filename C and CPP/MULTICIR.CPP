#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void bres_circle(int,int,int);
void on_circle(int,int,int,int);
void main()
{
int gd=DETECT,gm;
int r,midx,midy;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
bres_circle(300,300,70);
bres_circle(370,300,70);
bres_circle(340,340,70);
bres_circle(340,260,70);
//midx=getmaxx()/2;
//midy=getmaxy()/2;
//setcolor(RED);
//line(midx,0,midx,2*midy);
//line(0,midy,2*midx,midy);
bres_circle(midx,midy,r);
getch();
closegraph();
}
void bres_circle(int midx,int midy,int r)
{
int d,x,y;
x=0;
y=r;
d=1-r;
on_circle(x,y,midx,midy);
while(y>x)
{
if(d<=0)
{
d=d+2*x+3;
x=x+1;
}
else
{
d=d+2*x-2*y+5;
x=x+1;
y=y-1;
}
on_circle(x,y,midx,midy);
}
}
void on_circle(int x,int y,int midx,int midy)
{
putpixel(midx+x,midy+y,WHITE);
putpixel(midx-x,midy+y,WHITE);
putpixel(midx+x,midy-y,WHITE);
putpixel(midx-x,midy-y,WHITE);
putpixel(midx+y,midy+x,WHITE);
putpixel(midx-y,midy+x,WHITE);
putpixel(midx+y,midy-x,WHITE);
putpixel(midx-y,midy-x,WHITE);
delay(50);
}