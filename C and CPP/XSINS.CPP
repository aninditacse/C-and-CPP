#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int x;
double s=0.0,y,t=0.0;
cout<<"Enter the number";
cin>>x;
y=x*(3.14/180);
s=sin(y);
cout<<sin(y);
t=s*x;
cout<<"Result="<<t;
getch();
}