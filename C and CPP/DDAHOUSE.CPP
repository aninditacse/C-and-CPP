#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
void dda_line(int,int,int,int);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
dda_line(200,200,400,200);
dda_line(200,200,200,280);
dda_line(400,200,400,280);
dda_line(280,240,280,280);
dda_line(280,240,320,240);
dda_line(320,240,320,280);
dda_line(200,280,400,280);
dda_line(150,200,200,200);
dda_line(400,200,450,200);
dda_line(200,150,150,200);
dda_line(400,150,450,200);
dda_line(200,150,400,150);
dda_line(230,230,260,230);
dda_line(230,230,230,260);
dda_line(230,260,260,260);
dda_line(260,230,260,260);
getch();
closegraph();
}
void dda_line(int x1,int y1,int x2,int y2)
{
int dx,dy,k,h,xi,yi,x,y;
float rdx,rdy;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
  h=abs(dx);
else
  h=abs(dy);
xi=dx/h;
yi=dy/h;
x=x1;
y=y1;
putpixel(x,y,WHITE);
for(k=1;k<=h;k++)
{
x=x+xi;
y=y+yi;
rdx=x+0.5;
rdy=y+0.5;
putpixel(rdx,rdy,WHITE);
}
}
