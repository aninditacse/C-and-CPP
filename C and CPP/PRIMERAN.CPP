#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,flag;
clrscr();
for(n=1;n<=1000;n++)
{
flag=0;
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d ",n);
}
}
getch();
}