#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n Factorial of %d is:%d",n,fact);
getch();
}