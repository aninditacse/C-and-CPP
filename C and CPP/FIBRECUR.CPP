#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int n,f,i;
clrscr();
printf("Enter the terms ");
scanf("%d",&n);
printf("Fibonacci seies is\n");
for(i=0;i<n;i++)
{
f=fib(i);
printf("%d\t",f);
}
getch();
}
int fib(int p)
{
if(p==0)
 return 0;
else if(p==1)
 return 1;
else
 return fib(p-1)+fib(p-2);
}