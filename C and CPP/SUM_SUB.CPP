#include<iostream.h>
#include<conio.h>
class complex
{
float x;
float y;
public:
	complex(){}
	complex(float f){x=y=f;}
	complex(float,float);
	friend void display(complex);
	friend complex operator +(complex,complex);
	friend complex operator -(complex,complex);
};
complex::complex(float a,float b)
{
 x=a;
 y=b;
}
void display(complex c)
{
cout<<c.x<<"+"<<c.y<<"j";
}
complex operator +(complex c1,complex c2)
{
complex c3;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
return(c3);
}
complex operator -(complex c1,complex c2)
{
complex c3;
c3.x=c1.x-c2.x;
c3.y=c1.y-c2.y;
return(c3);
}
void main()
{
complex A=complex(7.5,8.5);
complex B(4.1,2.3);
complex C;
complex D;
clrscr();
C=A+B;
D=A-B;
cout<<"\nFirst complex number is: ";
display(A);
cout<<"\nSecond complex number is: ";
display(B);
cout<<"\nSum is ";
display(C);
cout<<"\nSubtruction is ";
display(D);
getch();
}