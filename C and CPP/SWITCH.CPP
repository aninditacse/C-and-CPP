#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0,choice;
clrscr();
printf("Enter the value of n: ");
scanf("%d",&n);
printf("\n Press 1 For for loop");
printf("\n Press 2 For while loop");
printf("\n Press 3 For do while loop");

printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:for(i=1;i<=n;i++)
      {
      s=s+i;
      }
      printf("\n Sum=%d",s);
      break;
case 2:i=1;
      while(i<=n)
      {
      s=s+i;
      i++;
      }
      printf("\n Sum=%d",s);
      break;
case 3:i=1;
      do
      {
      s=s+i;
      i++;
      }while(i<=n);
      printf("\n Sum=%d",s);
      break;
      }
getch();
}