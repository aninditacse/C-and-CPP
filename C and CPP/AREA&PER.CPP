#include<stdio.h>
#include<conio.h>
void main()
{
float r,area=0.0,peri=0.0;
clrscr();
printf("Enter the radius of the circle: ");
scanf("%f",&r);
area=3.14*r*r;
peri=2*3.14*r;
printf("\n Area and Perimeter of the circle r: %f %f",area,peri);
getch();
}