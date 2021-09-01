#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
clrscr();
int i=0,j;
printf("Enter your name\n");
gets(ch);
while(ch[i]!='\0')
{
 i++;
}
printf("\n String in inverse order is:\n");
for(j=i-1;j>=0;j--)
 printf("%c",ch[j]);
getch();
}