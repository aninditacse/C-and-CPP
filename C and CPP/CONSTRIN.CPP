#include<iostream.h>
#include<conio.h>
#include<string.h>
const int sz=40;
class string
{
char arr[sz];
public:
	string(){strcpy(arr," ");}
	string(char s[]){strcpy(arr,s);}
	void display()
	{
	cout<<"\n"<<arr;
	}
	string operator +(string);
};
string string::operator +(string s2)
{
string t;
if(strlen(s2.arr)+strlen(arr)<40)
 {
  strcpy(t.arr,arr);
  strcat(t.arr,s2.arr);
 }
else
 {
  cout<<"Overflow";
 }
return t;
}
void main()
{
string s1(" Anindita");
string s2(" Ghosh");
string s3;
clrscr();
cout<<"\nFirst string: ";
s1.display();
cout<<"\nSecond string: ";
s2.display();
s3=s1+s2;
cout<<"\nConcatination of two string: ";
s3.display();
getch();
}