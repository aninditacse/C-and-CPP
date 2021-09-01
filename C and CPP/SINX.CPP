#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 float r=0.0,x,y,t=0.0;
 clrscr();
 cout<<"Enter the value of x: ";
 cin>>x;
 y=x*(3.14/180);
 r=sin(y);
 cout<<"Value of sin"<<x<<" is "<<r<<endl;
// s=sin(y);
 t=r*x;
 cout<<"The value of "<<x<<"sin"<<x<<" is "<<t;
 getch();
 }