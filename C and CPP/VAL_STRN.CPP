#include<iostream.h>
#include<conio.h>
#include<string.h>
class A
{
public:
	void add(float,float);
	void add(char a[],char b[]);
};
void A::add(float x,float y)
{
float z;
z=x+y;
cout<<"\nAddtion of two values: "<<z;
}
void A::add(char a[10],char b[10])
{
cout<<"\nConcatination of two strings: ";
cout<<strcat(a,b);
}
void main()
{
A f;
clrscr();
f.add(5.1,3.7);
f.add("Hello"," World");
getch();
}