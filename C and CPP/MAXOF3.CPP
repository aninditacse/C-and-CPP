#include<stdio.h>
#include<conio.h>
int max(int x,int y);
void main()
{
int a,b,c,m;
int l;
clrscr();
printf("Enter the numbers\n");
scanf("%d%d%d",&a,&b,&c);
m=max(a,b);
l=max(c,m);
printf("Max number is %d",l);
getch();
}
int max(int x,int y)
{
if(x>y)
 return x;
else
 return y;
}