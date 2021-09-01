#include<stdio.h>
#include<conio.h>
void sum(int x);
void main()
{
int n;
clrscr();
printf("Enter the value of n\n");
scanf("%d",&n);
sum(n);
getch();
}
void sum(int x)
{
int i,s=0;
for(i=0;i<=x;i++)
{
s=s+i;
}
printf("sum=%d",s);
}