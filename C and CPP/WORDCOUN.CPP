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
if(ch[i]==' '&&ch[i+1]!=' ')
 c++;
 i++;
}
printf("\n No of word= %d",c+1);
getch();
}