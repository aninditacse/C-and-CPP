#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b,s;
clrscr();
printf("Enter the numbers\n");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("The number is %d",s);
getch();
}
int sum(int x,int y)
{
int z;
z=x+y;
return z;
}