#include<iostream.h>
#include<conio.h>
class item
{
static int count;
int number;
public:
       void getdata(int a)
       {
       number=a;
       count++;
       }
       void getcount()
       {
       cout<<"\ncount is: "<<count;
       }
};
int item::count;
void main()
{
item a,b,c;
clrscr();
a.getcount();
b.getcount();
c.getcount();
a.getdata(100);
b.getdata(200);
c.getdata(300);
cout<<"\nAfter reading data\n";
a.getcount();
b.getcount();
c.getcount();
getch();
}