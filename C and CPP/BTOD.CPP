#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[10],n,r,s=0,c=0;
clrscr();
printf("Enter the binary number: ");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+(r*pow(2,c));
n=n/10;
c++;
}
printf("\n decimal number is : %d",s);
getch();
}