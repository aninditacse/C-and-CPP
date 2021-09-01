#include<iostream.h>
#include<conio.h>
class counter
{
int count;
public:
	counter():count(0){}
	counter(int a){count=a;}
	int getcount(){return count;}
	counter operator ++();
       counter operator ++(int);
};
counter counter::operator ++()
{
++count;
counter t;
t.count=count;
return t;
}
counter counter::operator ++(int)
{
return counter(count++);
}
void main()
{
counter c1,c2,c3;
clrscr();
c2=++c1;
cout<<"Prefix value of c1 and c2: "<<c1.getcount()<<" "<<c2.getcount();
c3=c1++;
cout<<"\nPostfix value of c1 and c2: "<<c1.getcount()<<" "<<c3.getcount();
getch();
}