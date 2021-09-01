#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define ch_no 255

void main()
{
char ch[]={"people peace pre"};
int i,c[ch_no],max=0,ascii;
clrscr();
for(i=0;i<ch_no;i++)
{
c[i]=0;
}
while(ch[i]!='\0')
{
ascii=(int)ch[i];
c[ascii]+=1;
i++;
}
max=0;
for(i=0;i<ch_no;i++)
{
if(c[i]>c[max])
max=i;
}
printf("%d",c[max]);
getch();
}