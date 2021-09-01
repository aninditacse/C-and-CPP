#include<stdio.h>
#include<conio.h>
int sum(int n);
void main()
{
int n,s=0;
clrscr();
printf("Enter the range of numbers\n");
scanf("%d",&n);
s=sum(n);
printf("Sum is=%d",s);
getch();
}
int sum(int n)
{
if(n==0)
 return 0;
else
 return n+sum(n-1);
}
