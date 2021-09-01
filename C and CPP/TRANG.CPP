#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void mult(int a[4][4],int b[4][4],int c[4][4]);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int a[4][4],b[4][4],c[4][4],x1,y1,x2,y2,x3,y3;
printf("\nEnter 1st co-ordinate: ");
scanf("%d%d",&x1,&y1);
printf("\nEnter 2nd co-ordinate: ");
scanf("%d%d",&x2,&y2);
printf("\nEnter 3rd co-ordinate: ");
scanf("%d%d",&x3,&y3);

line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
line(getmaxx()/2,0,getmaxx()/2,getmaxy());

a[0][1]=a[0][2]=a[1][0]=a[2][0]=a[2][1]=a[1][2]=0;
a[0][0]=-1;
a[1][1]=-1;
a[2][2]=-1;
b[0][0]=x1;
b[1][0]=y1;
b[0][1]=x2;
b[1][1]=y2;
b[0][2]=x3;
b[1][2]=y3;
b[2][0]=b[2][1]=b[2][2]=1;
line(x1+320,y1+240,x2+320,y2+240);
line(x2+320,y2+240,x3+320,y3+240);
line(x3+320,y3+240,x1+320,y1+240);
mult(a,b,c);
line(c[0][0]+320,c[1][0]+240,c[0][1]+320,c[1][1]+240);
line(c[0][1]+320,c[1][1]+240,c[0][2]+320,c[1][2]+240);
line(c[0][2]+320,c[1][2]+240,c[0][0]+320,c[1][0]+240);
getch();
closegraph();
}
void mult(int a[4][4],int b[4][4],int c[4][4])
{
int i,j,k;
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  c[i][j]=0;
  for(k=0;k<3;k++)
  {
   c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
  }
 }
}
}
