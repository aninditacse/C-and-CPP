#include<iostream.h>
#include<conio.h>
void prime(int);
void main()
{
int x,i;
clrscr();
cout<<"Enter a number";
cin>>x;
for(i=1;i<=x;i++)
{
 if(x%i==0)
  prime(i);
}

getch();
}
void prime(int n)
{
int j,c=0,m;
m=n;
for(j=1;j<=n;j++)
{
 if(n%j==0)
  c++;
 }
if(c==2)
 cout<<m<<"\t";
 }