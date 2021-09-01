#include<stdio.h>
#include<conio.h>
int fact(int);
int fact1(int,int);
void main()
{
long int n,f;
clrscr();
printf("Enter the number: ");
scanf("%ld",&n);
f=fact(n);
printf("Factorial is=%d",f);
getch();
}
int fact(int x)
{
return fact1(x,1);
}
int fact1(int a,int b)
{
 if(a==1)
  return b;
 else
return fact1(a-1,a*b);
}
