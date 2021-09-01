#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-3*x-5);
}
float df(float x)
{
return (3*x*x-3);
}
void main()
{
float a,f1,f2,e=0.0001,m;
clrscr();
printf("Enter the value of x0: ");
scanf("%f",&a);
do
{
m=a;
f1=f(m);
printf("\n\Value of f(x): %f",f1);
f2=df(m);
printf("\nValue of f'(x): %f",f2);
a=m-(f1/f2);
printf("\n\Value of f(x+1): %f",a);
printf("\n");
}while((m-a)>e);
printf("\nRoot is: %f",m);
getch();
}