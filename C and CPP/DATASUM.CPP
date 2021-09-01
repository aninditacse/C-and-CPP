#include<iostream.h>
#include<conio.h>
class b;
class a
{
int x;
public:
	void getdata(int p)
	{
	x=p;
	}
      friend int add(a m,b n);
};
class b
{
int y;
public:
       void getdata(int p)
       {
       y=p;
       }
       friend int add(a m,b n);
};
int add(a m,b n)
{
 return (m.x+n.y);
}
void main()
{
a m;
b n;
int i,j;
clrscr();
cout<<"Enter two numbers: ";
cin>>i>>j;
m.getdata(i);
n.getdata(j);
cout<<"sum is: "<<add(m,n);
getch();
}
