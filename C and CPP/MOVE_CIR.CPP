#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(int i=0;i<350;i++)
{
for(int j=0;j<300;j++)
{
circle(100+i,100+j,70);
delay(10);
cleardevice();
}
}
getch();
closegraph();
}
