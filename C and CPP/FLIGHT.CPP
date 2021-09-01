#include<iostream.h>
#include<conio.h>
class flight
{
int f_no;
char dest[20];
float dis;
float fuel;
public:
	/*void getdata(int a,char b,int c,int d)
	{
	f_no=a;
	dest=b;
	dis=c;
	fuel=d;
	} */
	void calfuel()
	{
	if(dis<=1000)
	 fuel=500;
	else if(dis<=2000)
	 fuel=1100;
	else
	 fuel=2200;
	 }
	 void feedinfo()
	 {
	 cout<<"\nFlight number ";
	 cin>>f_no;
	 cout<<"\nDestination ";
	 cin>>dest;
	 cout<<"\nDistance ";
	 cin>>dis;
	 calfuel();
	 }
	void showinfo()
	{
	cout<<"\nFlight number is "<<f_no;
	cout<<"\nDestination  is "<<dest;
	cout<<"\nDistance is "<<dis;
	cout<<"\nFuel is "<<fuel;
	}
};
void main()
{
clrscr();
flight f;
f.calfuel();
f.feedinfo();
f.showinfo();
getch();
}