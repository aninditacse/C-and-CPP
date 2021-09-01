#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//#define size 5
int top=-1;
int a[10];
class stack
{
int i;
public:
       void push(int);
       void pop();
       void display();
};
void stack::push(int n)
{
//int n;
 if(top==9)
  cout<<"\nStack is full";
 else
 {
  ++top;
  a[top]=n;
 }
}
void stack::pop()
{
 if(top==-1)
  cout<<"\nStack is empty";
 else
 {
  cout<<a[top]<<" is deleted\n";
  top--;
  }
}
void stack::display()
{
int x;

 cout<<"Stack elements are: "<<endl;
 for(i=top;i>=0;i--)
 {
  cout<<a[i]<<"\t";
  }
}
int main()
{
stack s;
int x,ch;
char ans;
clrscr();
do
{
cout<<"\n1.PUSH \n.2 POP \n3.DISPLAY \n4.EXIT"<<endl;
cout<<"Enter your choice: "<<endl;
cin>>ch;
switch(ch)
{
case 1:
	cout<<"Enter the number: ";
	cin>>x;
	s.push(x);
	break;
case 2:
	s.pop();
	break;
case 3:
	s.display();
	break;
case 4:
	exit(0);
}
cout<<"\nDo u want to continue? ";
ans=getche();
}while(ans=='Y'||ans=='y');
return 0;
}