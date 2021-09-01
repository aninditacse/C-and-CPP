#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
int i,l;
clrscr();
printf("Enter your name\n");
gets(ch);
l=strlen(ch);
for(i=0;i<l;i++)
{
 if(ch[i]>='a'&&ch[i]<='z')
  ch[i]=ch[i]-32;
 else if(ch[i]>='A'&&ch[i]<='Z')
  ch[i]=ch[i]+32;
}
puts(ch);
getch();
}
