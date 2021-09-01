#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
int i,flag,l;
clrscr();
printf("Enter the string\n");
gets(ch);
l=strlen(ch);
for(i=0;i<l;i++)
{
if(ch[i]==ch[l-i-1])
 flag=0;
else
flag=1;
break;
}
if(flag==0)
printf("\nstring is palindrom");
else
printf("\nstring is not palindrom");
getch();
}