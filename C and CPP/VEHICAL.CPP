#include<iostream.h>
#include<conio.h>
class v
{
public:
	int w;
	int s;
	v()
	{
	cout<<"Enter no of w ";
	cin>>w;
	cout<<"Enter speed ";
	cin>>s;
	}
};
class car:public v
{
public:
	int pass;
	void passn()
	{
	cout<<"Enter pass ";
	cin>>pass;
	}
};
class truck:public v
{
public:
	int load;
	void loading()
	{
	cout<<"Enter load ";
	cin>>load;
	}
};
int main()
{
car m;
truck n;
clrscr();
m.passn();
n.loading();
if(m.s>n.s)
 cout<<"\ncar is faster\n";
else
 cout<<"\ntruck is faster\n";
return 0;
}