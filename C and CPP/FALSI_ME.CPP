#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-2*x-5);
}
/*float df(float x)
{
return (3*x*x-3);
} */
void main()
{
float a,f1,f2,e=0.0001,m,b,x0,xn,x1,x;
clrscr();
printf("Enter the value of x0: ");
scanf("%f",&a);
printf("Enter the value of xn: ");
scanf("%f",&b);
do
{
x=xn-x0;
f1=f(xn)-f(x0);
x1=(xn-((x/f1)*f(xn)));
printf("value of x(n+1): %f",x1);
}while(x0<e);
printf("root %f",x0);
getch();
}
/*m=a;
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
}*/