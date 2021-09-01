#include<iostream.h>
#include<conio.h>
class B;
class A
{
int a,b;
public:
	void setvalue(int i,int j)
	{
	a=i;
	b=j;
	}
	friend class B;
};
class B
{
public:
	int min(A);
};
int B::min(A m)
{
return ((m.a<m.b)?m.a:m.b);
}
void main()
{
A obj;
obj.setvalue(4,1);
B obj1;
clrscr();
cout<<"Minimum is "<<obj1.min(obj);
getch();
}