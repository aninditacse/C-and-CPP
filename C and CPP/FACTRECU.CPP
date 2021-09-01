#include<stdio.h>
#include<conio.h>
long int fact(long int n);
void main()
{
long int n,factorial=0;
clrscr();
printf("Enter the number: ");
scanf("%ld",&n);
factorial=fact(n);
printf("Factorial is=%d",factorial);
getch();
}
long int fact(long int n)
{
if(n<=1)
return 1;
else
return n*fact(n-1);
}
