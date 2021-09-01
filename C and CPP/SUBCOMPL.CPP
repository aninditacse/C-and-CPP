#include<iostream.h>
#include<conio.h>
class complex
{
float real;
float imag;
public:
	complex(){real=0.0,imag=0.0;}
	complex(float a,float b)
	{
	real=a;
	imag=b;
	}
	void display();
	complex operator -(complex);
};
complex complex::operator -(complex c1)
{
complex c2;
c2.real=real-c1.real;
c2.imag=imag-c1.imag;
return(c2);
}
void complex::display()
{
cout<<real<<"+"<<imag<<"j";
}
void main()
{
complex A=complex(7.5,8.5);
complex B(4.2,2.3);
complex C;
clrscr();
C=A-B;
cout<<"First complex number is: ";
A.display();
cout<<"\nSecond complex number is: ";
B.display();
cout<<"\nSubtraction is: ";
C.display();
getch();
}