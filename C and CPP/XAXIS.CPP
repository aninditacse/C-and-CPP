#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,midx,midy,x11,y11,x22,y22;
clrscr();
printf("Enter the starting co-ordinates\n");
scanf("%d%d",&x1,&y1);
printf("Enter the ending co-ordinates\n");
scanf("%d%d",&x2,&y2);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(WHITE);
line(midx,0,midx,2*midy);
line(0,midy,2*midx,midy);
rectangle(midx+x1,midy-y1,midx+x2,midy-y2);
x11=x1;
y11=-y1;
x22=x2;
y22=-y2;
rectangle(midx+x11,midy-y11,midx+x22,midy-y22);
getch();
closegraph();
}



