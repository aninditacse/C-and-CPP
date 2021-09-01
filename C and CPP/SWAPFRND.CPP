#include<iostream.h>
#include<conio.h>
class class2;
class class1
{
int val1;
public:
	void setdata(int);
	void display();
	friend void exchange(class1 &,class2 &);
	//friend class2;
};
void class1::setdata(int i)
{
val1=i;
}
void class1::display()
{
cout<<"\nvalue is "<<val1;
}

 class class2
{
int val2;
public:
	void setdata(int);
	void display();
	friend void exchange(class1 &,class2 &);
};
void class2::setdata(int j)
{
val2=j;
}
void class2::display()
{
cout<<"\nvalue is "<<val2;
}
void exchange(class1 &c1,class2 &c2)
{
int t;
t=c1.val1;
c1.val1=c2.val2;
c2.val2=t;
}
void main()
{
class1 A;
class2 B;
clrscr();
A.setdata(5);
B.setdata(6);
A.display();
B.display();
exchange(A,B);
cout<<"\nAfter swapping";
A.display();
B.display();
getch();
}