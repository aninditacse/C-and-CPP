#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20],c;
int i=0,cn=0;
clrscr();
printf("Enter the string\n");
gets(ch);
printf("\n Enter a character\n");
scanf("%c",&c);
while(ch[i]!='\0')
{
if(ch[i]==c)
 cn++;
 i++;
}
printf("\n No of occurances= %d",cn);
getch();
}