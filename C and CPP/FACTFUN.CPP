#include<stdio.h>
#include<conio.h>
long int fact(int x);
void main()
{
int n,f;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
f=fact(n);
printf("Factorial of %d is %d",n,f);
getch();
}
long int fact(int x)
{
int i,fact1=1;
for(i=1;i<=x;i++)
{
fact1=fact1*i;
}
return fact1;
}