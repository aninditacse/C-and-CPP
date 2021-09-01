#include<iostream.h>
#include<conio.h>
class distance
{
int feet;
float inches;
public:
	distance(){feet=0,inches=0.0;}
	distance(int f,float in)
	{
	feet=f;
	inches=in;
	}
	void getdata()
	{
	cout<<"Enter feet value: ";
	cin>>feet;
	cout<<"Enter inches value: ";
	cin>>inches;
	}
	int operator <(distance d)
	{
	float x=d.feet+d.inches/12;
	float y=feet+inches/12;
	return (y<x)?1:0;
	}
};
void main()
{
distance A(7,8.5);
distance B;
clrscr();
B.getdata();
if(A<B)
 cout<<"Distance A is smaller than B";
else
 cout<<"Larger";
 getch();
}