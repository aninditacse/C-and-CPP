#include<stdio.h>
#include<conio.h>
#include<math.h>
float bi(float);
void main()
{
float x,a,b,e=0.00005;
clrscr();
printf("Enter the value of a and b: ");
scanf("%f%f",&a,&b);
do
{
x=(a+b)/2;
printf("Value of x: %f",x);
if((bi(a)*bi(x)<0))
{
a=x;
}
else
{
b=x;
}
}while(abs(bi(a)-bi(b))<e);
printf("\nAnswer is: %f",bi(x));
getch();
}
float bi(float x)
{
return (pow(x,3)-9*x+1);
}