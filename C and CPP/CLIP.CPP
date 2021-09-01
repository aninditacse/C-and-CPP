#include<stdio.h>
#include<graphics.h>
#include<conio.h>
typedef unsigned int outcode;
enum
{TOP=0X1,BOTTOM=0X2,RIGHT=0X4,LEFT=0X8};
int Endpoint(float x,float y,float xwmin,float ywmin,float xwmax,float ywmax)
{
int code=0;
if(y>ywmax)
code|=TOP;
else if(y<ywmin)
code|=BOTTOM;
else if(x>xwmax)
code|=RIGHT;
else if(x<xwmin)
code|=LEFT;
return(code);
}
void lineclip(float x0,float y0,float x1,float y1,float xwmin,float ywmin,float xwmax,float ywmax)
{
int gd,gm;
outcode P1code,P2code,codeout;
int accept=0,done=0;
printf("%x%x%x%x",TOP,BOTTOM,RIGHT,LEFT);
P1code=Endpoint(x0,y0,xwmin,ywmin,xwmax,ywmax);
P2code=Endpoint(x1,y1,xwmin,ywmin,xwmax,ywmax);
do
{
if(!(P1code | P2code))
{
accept=1;done=1;
}
else
if(P1code & P2code) done=1;
else
{
float x,y;
codeout=P1code?P1code:P2code;
if(codeout & TOP)
{
x=x0+(x1-x0)*(ywmax-y0)/(y1-y0);
y=ywmax;
}
else
if(codeout & BOTTOM)
{
x=x0+(x1-x0)*(ywmin-y0)/(y1-y0);
y=ywmin;
}
else
if(codeout & RIGHT)
{
y=y0+(y1-y0)*(xwmax-x0)/(x1-x0);
x=xwmax;
}
else
{
y=y0+(y1-y0)*(xwmin-x0)/(x1-x0);
x=xwmin;
}
if(codeout==P1code)
{
x0=x;y0=y;
P1code=Endpoint(x0,y0,xwmin,ywmin,xwmax,ywmax);
}
else
{
x1=x;y1=y;
P2code=Endpoint(x1,y1,xwmin,ywmin,xwmax,ywmax);
}
}
}while(done==0);
if(accept)line(x0,y0,x1,y1);
rectangle(xwmin,ywmin,xwmax,ywmax);
getch();
}
int main()
{
float x2,y2,x1,y1,xwmin,ywmin,xwmax,ywmax;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
printf("*--Enter the co-ordinates of line--*");
printf("\n\tx1 y1:");
scanf("%f%f",&x1,&y1);
printf("\n\tx2 y2:");
scanf("%f%f",&x2,&y2);
printf("\n*--Enter the co_ordinates of window:--*");
printf("\n\txwmin,ywmin:");
scanf("%f%f",&xwmin,&ywmin);
printf("\n\txwmax,ywmax:");
scanf("%f%f",&xwmax,&ywmax);
line(x1,y1,x2,y2);
rectangle(xwmin,ywmin,xwmax,ywmax);
getch();
cleardevice();
lineclip(x1,y1,x2,y2,xwmin,ywmin,xwmax,ywmax);
getch();
closegraph();
return 0;
}

