#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
//void flood(int,int,int,int);
void boundary_fill(int,int,int,int);
void main()
{
int gd,gm=DETECT;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(50,50,100,100);
boundary_fill(51,51,10,0);
getch();
}
//void flood(int x,int y,int fill_col,int old_col)
//{
//if(getpixel(x,y)==old_col)
//{
//delay(10);
//putpixel(x,y,fill_col);
//flood(x+1,y,fill_col,old_col);
//flood(x-1,y,fill_col,old_col);
//flood(x,y+1,fill_col,old_col);
//flood(x,y-1,fill_col,old_col);
//}}
void boundary_fill(int x,int y,int fill,int boundary)
{
if(getpixel(x,y)!=fill&&getpixel(x,y)==boundary)
{
//delay(8);
putpixel(x,y,fill);
boundary_fill(x+1,y,fill,boundary);
boundary_fill(x-1,y,fill,boundary);
boundary_fill(x,y+1,fill,boundary);
boundary_fill(x,y-1,fill,boundary);
boundary_fill(x+1,y+1,fill,boundary);
boundary_fill(x+1,y-1,fill,boundary);
boundary_fill(x-1,y+1,fill,boundary);
boundary_fill(x-1,y-1,fill,boundary);
}
}
