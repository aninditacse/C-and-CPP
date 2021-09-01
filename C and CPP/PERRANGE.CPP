#include<stdio.h>
#include<conio.h>
void main()
{
int n,s,i,low,upper;
clrscr();
printf("enter the lower limit: ");
scanf("%d",&low);
printf("enter the upper limit: ");
scanf("%d",&upper);
printf("the perfect numbers are\n");
for(n=low+1;n<upper;n++)
{
s=0;
for(i=1;i<n;i++)
if(n%i==0)
s=s+i;
if(s==i)
printf("%d\t",n);
}
getch();
}