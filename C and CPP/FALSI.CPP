#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (pow(x,3)-2*x-5);
}
void main()
{
float a,x,y,e=0.0001,b,F0,F1;
//int i=0;
clrscr();
printf("Enter the value of x0: ");
scanf("%f",&a);
printf("Enter the value of x1: ");
scanf("%f",&b);
do
{
F0=f(a);
F1=f(b);
x=a-((F0*(b-a))/(F1-F0));
y=f(x);
printf("\niteration %d=%f",i++,x);
if(F0*y<0)
b=x;
else
a=x;
}while(fabs(y>e));
printf("\nRoot is: %f",x);
getch();
}