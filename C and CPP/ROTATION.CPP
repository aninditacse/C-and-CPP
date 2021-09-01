#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int sx,sy,ex,ey;
float t,b1,b2,deg,k1,k;
clrscr();
printf("Enter the starting co ordinates\n");
scanf("%d%d",&sx,&sy);
printf("Enter the ending....\n");
scanf("%d%d",&ex,&ey);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(WHITE);
line(sx,sy,ex,ey);
k1=sqrt((ex-sx)*(ex-sx)+(ey-sy)*(ey-sy));
printf("length=%f",k1);
printf("\nEnter the angle\n");
scanf("%f",&deg);
t=3.141*deg/180;
b1=abs((ex*cos(t))-(ey*sin(t)));
b2=abs((ex*sin(t))+(ey*cos(t)));
line(sx,sy,b1,b2);
getch();
closegraph();
}
