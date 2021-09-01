#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void bresenham(int,int,int,int);
void main()
{
int gd=DETECT,gm;
int sx,sy,ex,ey,midx,midy;
clrscr();
printf("Enter the starting co ordinates\n");
scanf("%d%d",&sx,&sy);
printf("Enter the ending....\n");
scanf("%d%d",&ex,&ey);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(WHITE);
line(midx,0,midx,2*midy);
line(0,midy,2*midx,midy);
bresenham(sx,sy,ex,ey);
getch();
closegraph();
}
void bresenham(int sx,int sy,int ex,int ey)
{
int dx,dy,d,ine,inne,x,y;
dx=ex-sx;
dy=ey-sy;
d=2*dy-dx;
ine=2*dy;
inne=2*dy-2*dx;
x=sx;
y=sy;
putpixel(x,y,WHITE);
while(x<ex)
{
if(d<=0)
{
d=d+ine;
x=x+1;
}
else
{
d=d+inne;
x=x+1;
y=y+1;
}
putpixel(x,y,WHITE);
}
}
