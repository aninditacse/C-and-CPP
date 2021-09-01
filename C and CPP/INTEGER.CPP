#include<iostream.h>
#include<conio.h>
class Integer
{
int m,n;
public:
	Integer(){m=0,n=0;}
	Integer(int,int);
	Integer(Integer &);
};
Integer::Integer(int a,int b)
{
 m=a;
 n=b;
 cout<<"The vaslue of m and n is "<<m<<" "<<n;
 }
Integer::Integer(Integer &i)
 {
  m=i.m;
  n=i.n;
   cout<<"\nThe vaslue of m and n is "<<m<<" "<<n;
}
void main()
{
clrscr();
Integer I1;
Integer I2(50,100);
Integer I3(I2);
getch();
}