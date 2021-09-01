#include<iostream.h>
#include<conio.h>
#define pi 3.14
class shape
{
public:
	float vol(float);
	double vol(int,int);
	double vol(int);
	float vol(int,int,int);
};
float shape::vol(float r)
{
return ((float)4/3*(pi*r*r*r));
}
double shape::vol(int h,int r)
{
return (pi*r*r*h);
}
double shape::vol(int a)
{
return (a*a*a);
}
float shape::vol(int a,int b,int c)
{
return (a*b*c);
}
void main()
{
shape s,c,cu,b;
clrscr();
cout<<"Volume of sphere\n";
cout<<s.vol((float) 2.5);
cout<<"\nVolume of clinder\n";
cout<<c.vol(6,2);
cout<<"\nVolume of cuboid\n";
cout<<cu.vol(1);
cout<<"\nVolume of box\n";
cout<<b.vol(1,2,3);
getch();
}
