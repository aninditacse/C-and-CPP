#include<iostream.h>
#include<conio.h>
class base
{
protected:
	int i;
public:
	base(int a){i=a;cout<<"Constructing base";}
	~base(){cout<<"destroying base";}
};
class derived:public base
{
int j;
public:
	derived(int x,int y):base(y)
	{
	j=x;
	cout<<"\nConstructing derived";
	}
	~derived(){cout<<"Destroy";}
	void show(){cout<<endl<<i<<"\t"<<j;}
};

void main()
{
clrscr();
derived obj(3,4);
obj.show();
getch();
}