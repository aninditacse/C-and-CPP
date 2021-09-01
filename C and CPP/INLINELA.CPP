#include<iostream.h>
#include<conio.h>
inline big(int a,int b,int c)
{
return(a>b)?(a>c?a:c):(b>c?b:c);
}
void main()
{
int a,b,c,max;
clrscr();
cout<<"Enter three number\n";
cin>>a>>b>>c;
max=big(a,b,c);
cout<<"The largest number is: "<<max;
getch();
}