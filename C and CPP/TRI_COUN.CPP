#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,yh=1,i,k=0;
clrscr();
printf("Enter the number of cut off lines vertically: ");
scanf("%d",&x);
printf("Enter the number of cut off lines horizontally: ");
scanf("%d",&y);
 yh=1;
 for(i=1;i<=y;i++)
 {
  yh=yh+(i+1);
 }
 k=yh;
 for(i=y+1;i>(y-i);i--)
 {
  k=(k-i);
  yh=yh+k;
  y--;
 }
 printf("No of traingles are: %d",yh);
getch();
}