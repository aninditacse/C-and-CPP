#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0,m;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(s==m)
printf("%d is a palindrome number",m);
else
printf("%d is not a palindrome number",m);
getch();
}