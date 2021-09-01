#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r,s=0,m,c=0;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
m=n;
while(n>0)
{
n=n/10;
c++;
}
n=m;
while(n>0)
{
r=n%10;
s=s+pow(r,c);
n=n/10;
}
if(s==m)
printf("%d is a armstrong number",m);
else
printf("%d is not a armstrong number",m);
getch();
}