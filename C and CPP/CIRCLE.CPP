#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void circle1(int,int,int);
void oncircle(int,int,int,int);
void main()
{
int gd=DETECT,gm;
int midx,midy,r;
clrscr();
printf("Enter the radius");
scanf("%d",&r);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(RED);
line(midx,0,midx,2*midy);
line(0,midy,2*midx,midy);
circle1(r,midx,midy);
getch();
closegraph();
}
void circle1(int r,int midx,int midy)
{
int d,x,y;
x=0;
y=r;
d=1-r;
oncircle(x,y,midx,midy);
while(y>x)
{
 if(d<0)
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
oncircle(x,y,midx,midy);
delay(40);
}
}
void oncircle(int x,int y,int midx,int midy)
{
putpixel(midx+x,midy+y,4);
putpixel(midx-x,midy+y,4);
putpixel(midx+x,midy-y,4);
putpixel(midx-x,midy-y,4);
putpixel(midx+y,midy+x,4);
putpixel(midx-y,midy+x,4);
putpixel(midx+y,midy-x,4);
putpixel(midx-y,midy-x,4);
}
