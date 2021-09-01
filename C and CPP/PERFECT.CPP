#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,i;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(s==n)
printf("The number is perfect");
else
printf("The number is not perfect");
getch();
}