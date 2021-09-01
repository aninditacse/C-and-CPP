#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x,y,flag=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=30;
while(!kbhit())
{
if(y>=getmaxy()-30||y<=30)
flag=!flag;
setcolor(14);
setfillstyle(SOLID_FILL,14);
circle(x,y,30);
floodfill(x,y,14);
delay(10);
cleardevice();
if(flag)
{
 y=y+5;
}
else
{
 y=y-5;
}
}
getch();
closegraph();
}