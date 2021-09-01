#include<stdio.h>
#include<conio.h>
long fact(int);
int main()
{
int i,n,c;
clrscr();
printf("Enter the number of rows\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 for(c=0;c<=(n-i-2);c++)
 printf(" ");
 for(c=0;c<=i;c++)
 printf("%ld",fact(i)/(fact(c)*fact(i-c)));
 printf("\n");
 }
 return 0;
}
long fact(int n)
{
int c;
long result=1;
for(c=1;c<=n;c++)
result=result*c;
return result;
}
