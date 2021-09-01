#include<stdio.h>
#include<conio.h>
int main()
{
int ch,s,d,t,ch1;
char ans,ans1;
clrscr();
do
{
 printf("\n1.Find speed of a train\n2.Time of a train\n3.Exit");
 printf("\nEnter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1,2,3:
 printf("\n1.Speed\n2.Time\n3.Exit");
 printf("\nEnter your choice: ");
 scanf("%d",&ch1);
 switch(ch1)
 {
 case 1:
	  printf("\nEnter distance: ");
	  scanf("%d",&d);
	  printf("\nEnter time: ");
	  scanf("%d",&t);
	  s=d/t;
	  printf("\nSpeed is: %d",s);
	  break;
 case 2:
	  printf("\nEnter distance: ");
	  scanf("%d",&d);
	  printf("\nEnter speed: ");
	  scanf("%d",&s);
	  t=d/s;
	  printf("\nTime is: %d",t);
	  break;
 case 3:
	  printf("\nDo u want to back to menu 1? ");
}
printf("\nDo you want to continue? ");
ans=getche();
}
}while(ans=='Y'||ans=='y');
return 0;
}