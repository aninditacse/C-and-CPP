#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 10
int front=-1;
int rear=-1;
int ar[max];
void main()
{
int choice;
clrscr();
printf("1.insert\n");
printf("2.delete\n");
printf("3.display\n");
printf("\nEnter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: void insert();
	//break;
case 2:int del();
	//break;
case 3: void display();
	//break;
       }
     }
void insert()
{
int item;
if(rear==max-1)
 printf("queue is full");
else
{
 if(front==-1)
 {
  front=0;
   printf("insert element\n");
   scanf("%d",&item);
   }
 else
  {
   rear=rear+1;
   ar[rear]=item;
  }
}
}
int del()
{
int x;
if(front==-1||front>rear)
 {
  printf("empty");
  return 1;
}
else
{
 x=ar[front];
 printf("element deleted %d\n");
 front=front+1;
 return x;
}
void display()
{
int i;
if(front==-1||front>rear)
 printf("queue is: ");
for(i=front;i<=rear;i++)
 printf("%d",ar[i]);
 printf("\n");
 }
}

 front=front+1