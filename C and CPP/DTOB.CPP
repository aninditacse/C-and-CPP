#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,r,i=0,j;
clrscr();
printf("Enter the decimel number\n");
scanf("%d",&n);
while(n>0)
{
r=n%2;
a[i]=r;
n=n/2;
i++;
}
printf("\n Binary number is :");
for(j=i-1;j>=0;j--)
printf("%d",a[j]);
getch();
}