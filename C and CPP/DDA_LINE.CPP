#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void dda_line(int xa,int ya,int xb,int yb);
void main()
{
int gd=DETECT,gm;
int xa,yb,xb,ya,midx,midy;
clrscr();
printf("Enter the starting co ordinates\n");
scanf("%d%d",&xa,&ya);
printf("Enter the ending....\n");
scanf("%d%d",&xb,&yb);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(WHITE);
line(midx,0,midx,2*midy);
line(0,midy,2*midx,midy);
dda_line(xa,ya,xb,yb);
getch();
closegraph();
}
void dda_line(int xa,int ya,int xb,int yb)
{
int dx,dy,d,k,h;
float xin,yin,x,y;
dx=xb-xa;
dy=yb-ya;
if(abs(dx)>abs(dy))
  h=abs(dx);
else
  h=abs(dy);
xin=dx/h;
yin=dy/h;
x=xa;
y=ya;
putpixel(x,y,WHITE);
for(k=1;k<=h;k++)
{
x=x+xin;
y=y+yin;
putpixel((int)x,(int)y,WHITE);
}
}