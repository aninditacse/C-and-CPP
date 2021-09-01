#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x1=320,y1=240,midx,midy;
float x11,y11,x22,y22,sx,sy;
clrscr();
/*printf("Enter the starting co ordinates\n");
scanf("%d%d",&x1,&y1);
printf("Enter the ending....\n");
scanf("%d%d",&x2,&y2);*/
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(WHITE);
line(midx,0,midx,2*midy);
line(0,midy,2*midx,midy);
rectangle(320,240,380,200);
printf("Enter the scaling factor\n");
scanf("%f%f",&sx,&sy);
x11=sx*x1;
y11=sy*y1;
/*x22=x2+tx;
y22=y2+ty;*/
 rectangle(x1,y1,x1+x11,y1-y11);
getch();
closegraph();
}
