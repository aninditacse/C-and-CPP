#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void bresen(int,int,int,int);
void dda(int,int,int,int);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("Line for bresenham---");
bresen(200,100,400,100);
printf("\n\n\n\n\n\n\nLine for DDA---");
dda(220,200,400,200);
getch();
closegraph();
}
void bresen(int x1,int y1,int x2,int y2)
{
int x=x1,y=y1,d,ds,dt,dx,dy;
dx=abs(x2-x1);
dy=abs(y2-y1);
d=2*dy-dx;
dt=2*(dy-dx);
ds=2*dy;
while(x<x2)
{
 x++;
 if(d<0)
  d=d+ds;
 else
  {
   y++;
   d=d+dt;
  }
 delay(50);
putpixel(x,y,6);
}
}
void dda(int x1,int y1,int x2,int y2)
{
float incx,incy,x,y;
int len,i;
len=abs(x2-x1);
if(abs(y2-y1)>len)
{
 len=abs(y2-y1);
}
incx=(x2-x1)/len;
incy=(y2-y1)/len;
x=x1;
y=y1;
for(i=1;i<len;i++)
{
putpixel(x,y,3);
x=incx+x;
y=incy+y;
}
}
