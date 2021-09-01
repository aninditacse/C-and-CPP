#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
int i=0,c=0;
clrscr();
printf("Enter your name\n");
gets(ch);
while(ch[i]!='\0')
{
if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
 c++;
 i++;
}
printf("\n No of vowel is %d",c);
getch();
}