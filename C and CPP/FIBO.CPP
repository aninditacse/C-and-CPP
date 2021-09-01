#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=0,b=1,s=0,n;
clrscr();
printf("Enter the limit till which you want generate: ");
scanf("%d",&n);
printf("The fibonacci series is\n");
for(i=1;i<=n;i++)
{
printf("%d\t",a);
s=a+b;
a=b;
b=s;
}
getch();
}