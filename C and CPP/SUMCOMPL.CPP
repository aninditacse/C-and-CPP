#include<iostream.h>
#include<conio.h>
class complex
{
float real;
float imag;
public:
	complex(){}
	complex(float x){real=imag=x;}
	complex(float,float);
	friend void display(complex);
	friend complex sum(complex,complex);
};
complex::complex(float a,float b)
{
 real=a;
 imag=b;
}
void display(complex x)
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
complex A=complex(3.5,2.5);
complex B(7.2,8.3);
complex C;
clrscr();
C=sum(A,B);
cout<<"First complex number is: ";
display(A);
cout<<"\nSecond complex number is: ";
display(B);
cout<<"\nSum is ";
display(C);
getch();
}