#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t1=0,t2=0,gcd=0,lcm,p,i;
clrscr();
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
 p=a*b;
for(i=1;i<=p;i++)
{
 t1=a%i;
 t2=b%i;
 if(t1==0&&t2==0)
  gcd=i;
 else
 lcm=(a*b)/gcd;
}
printf("GCD of two numbers is %d",gcd);
printf("\nLCM is %d",lcm);
getch();
}