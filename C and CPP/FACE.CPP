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
printf("Enter the radius of the circle\n");
scanf("%d",&r);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
bres_circle(320,240,r);
bres_circle(280,210,20);
bres_circle(360,210,20);
line(320,230,320,260);
line(280,280,360,280);
line(280,280,320,310);
line(320,310,360,280);

//midx=getmaxx()/2;
//midy=getmaxy()/2;
//setcolor(WHITE);
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
