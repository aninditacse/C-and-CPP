#include<iostream.h>
#include<conio.h>
class complex
{
float real;
float imag;
public:
	void input(float a,float b)
	{
	real=a;
	imag=b;
	}
	void display(complex);
	friend complex sum(complex,complex);
};
void complex::display(complex x)
{
cout<<x.real<<"+"<<x.imag<<"j";
}
complex sum(complex c1,complex c2)
{
complex c3;
c3.real=c1.real+c2.real;
c3.imag=c1.imag+c2.imag;
return(c3);
}
void main()
{
complex A,B,C;
clrscr();
A.input(3.69,2.31);
B.input(4.11,3.5);
C=sum(A,B);
cout<<"First complex number is: ";
A.display(A);
cout<<"\nSecond complex number is: ";
B.display(B);
cout<<"\nSum is ";
C.display(C);
getch();
}