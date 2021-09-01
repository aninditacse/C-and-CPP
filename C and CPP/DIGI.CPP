#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0,i;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
while(n>0)
{
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("\n\tsum is %d",s);
if(s>9)
{
n=s;
s=0;
}
}
getch();
}