#include<stdio.h>
#include<conio.h>
void rev(int);
void main()
{
int n,k;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
rev(n);
//printf("revers=%d",k);
getch();
}
void rev(int x)
{
int r,s=0;
while(x>0)
{
r=x%10;
s=s*10+r;
x=x/10;
}
printf("Reverse=%d",s);
}
//printf("Reverse number is= %ld",s);
//getch();
