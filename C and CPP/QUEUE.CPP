#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int front=-1;
int rear=-1;
int ar[max];
void insert(int x)
{
if(rear==max-1)
 printf("queue is full");
else
{
 if(front==-1)
 {
  front=0;
  rear=0;
  ar[rear]=x;
  }
  else
  {
   rear=rear+1;
   ar[rear]=x;
   }
  }
}
int del()
{
 int x;
 if(front==-1||front>rear)
  {
   printf("queue is empty");
   return 1;
   }
 else
  {
   x=ar[front];
   front=front+1;
   return x;
   }
}
void display()
{
int i;
if(front==-1||front>rear)
 printf("Empty");
else
{
for(i=front;i<=rear;i++)
 printf("%d\n",ar[i]);
 }
}
int main()
{
int choice,a;
char ans;
clrscr();
do
{
printf("\n1.Insert \n2. \Delete \n3.Display \n4.Exit");
printf("\nEnter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("\nEnter the element\n");
	scanf("%d",&a);
	insert(a);
	break;
case 2:
	a=del();
	printf("\nDeleted element is %d",a);
	break;
case 3:
	display();
	break;
case 4:
	exit(0);
}
printf("\nDo u want to continue?");
ans=getche();
}while(ans=='Y'||ans=='y');
return 0;
}