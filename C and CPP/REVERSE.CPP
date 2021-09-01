#include<stdio.h>
#include<conio.h>
void main()
{
long int n,r,s=0;
clrscr();
printf("Enter the number\n");
scanf("%ld",&n);
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
printf("Reverse number is= %ld",s);
getch();
}