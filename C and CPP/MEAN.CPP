#include<iostream.h>
#include<conio.h>
class sample
{
int a;
int b;
public:
	void setvalue(){a=25,b=30;}
	friend float mean(sample);
};
float mean(sample s)
{
 float c;
 c=(s.a+s.b)/2.0;
 return c;
}
void main()
{
sample x;
clrscr();
x.setvalue();
cout<<"The mean value is: "<<mean(x);
getch();
}
