#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,k,p,i,s=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
k=n;
while(k!=0)
{
r=k%10;
p=1;
i=1;
while(i<=r)
{
p=p*i;
i=i+1;
}
s=s+p;
k=k/10;
}
if(n==s)
{
 printf("Number is special");
}
else
{
 printf("Number is not special");
 }
 getch();
}
