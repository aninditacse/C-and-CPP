#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
void main()
{
int x,y;
clrscr();
cout<<"Enter two numbers\n";
cin>>x>>y;
cout<<"After swapped\n";
swap(x,y);
cout<<x<<" "<<y;
getch();
}
void swap(int &a,int &b)
{
int c;
c=a;
a=b;
b=c;
}