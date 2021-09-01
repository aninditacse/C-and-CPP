#include<stdio.h>
#include<conio.h>
#include<math.h>
float bi(float x)
{
return (pow(x,3)-9*x+1);
}
void main()
{
float x,y,a,b,e=0.001;
int i=0;
clrscr();
printf("Enter the value of a,b: ");
scanf("%f%f",&a,&b);
do
{
x=(a+b)/2;
y=bi(x);
printf("\niteration no. %d= %f",i++,x);
if(y>0)
{
 b=x;
 }
else
{
 a=x;
 }
 }while(fabs(y)>e);
printf("\n answer is %f",x);
getch();
}

