#include<stdio.h>
#include<conio.h>
void linear_search(int a[],int n,int key)
{
int i,flag=0;
for(i=0;i<n;i++)
{
 if(a[i]==key)
 {
  flag=1;
  break;
 }
}
if(flag==1)
 printf("Match found in %dth position ",i);
else
 printf("Does not exist");
}
void main()
{
int a[20],x,y;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
printf("Enter the numbers: ");
scanf("%d",&a[i]);
}
printf("Enter the searching element: ");
scanf("%d",&y);
linear_search(a,x,y);
getch();
}