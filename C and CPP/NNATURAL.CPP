#include<iostream.h>
#include<conio.h>
void main()
{
 int n,s=0,i;
 double a;
 clrscr();
 cout<<"Enter how many numbers\n";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  s=s+i;
  }
  cout<<"\nSum is: "<<s;
  a=s/double (n);
  cout<<"\nAverage is: "<<a;
  getch();
 }