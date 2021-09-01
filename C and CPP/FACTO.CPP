#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int n,fact=1,i;
clrscr();
cout<<"Enter the number: ";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"\nFactorial="<<fact;
getch();
}