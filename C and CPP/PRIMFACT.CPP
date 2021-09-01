#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,j,k,n;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
while(i<=n)
{
k=0;
if(n%i==0)
{
 j=1;
  while(j<=i)
   {
    if(i%j==0)
     k++;
    j++;
 }
 if(k==2)
 printf("\n%d is a prime factor",i);
 }
 i++;
}
getch();
}