#include<stdio.h>
#include<conio.h>
void move (int,char,char,char);
void main()
{
int n;
clrscr();
//char 'a','b','c';
printf("How many disk you want to move\n");
scanf("%d",&n);
move(n,'a','b','c');
getch();
}
void move(int x,char s,char d,char t)
{
 if(x==1)
  printf("Move disk from %c to %c\n",s,d);
 else
 {
  move(x-1,s,t,d);
  move(1,s,d,t);
  move(x-1,t,d,s);
 }
}