#include<iostream.h>
#include<conio.h>
class base1
{
protected:
	   int x;
public:
	void showx()
	{
	cout<<"x = "<<x;
	}
};
class base2
{
protected:
	   int y;
public:
	void showy()
	{
	cout<<"\ny = "<<y;
	}
};
class derived:public base1,public base2
{
public:
	void set(int m,int n)
	{
	x=m;
	y=n;
	}
};
void main()
{
derived obj;
clrscr();
obj.set(8,9);
obj.showx();
obj.showy();
getch();
}