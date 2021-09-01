#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int front=-1;
int rear=-1;
int ar[max];
int qfull()
{
 if(rear==max-1)
  return 1;
 else
  return 0;
}
void insert(int x)
{
rear=rear+1;
ar[rear]=x;
}
int qempty()
{
 if(front==-1||front>rear)
  return 1;
 else
  return 0;
 }
 int del()
 {
 int x;
 x=ar[front];
 front=front+1;
 return x;
}
void display()
{
int i;
if (front==-1||front>rear)
 printf("Empty");
 for(i=front;i<=rear;i++)
  printf("\n%d",ar[i]);
  }
int main()
{
int x,choice;
char ans;
clrscr();
do
{
printf("\nEnter your choice:Press 1 for insertion,Press 2 for deletion,Press 3 for display\n" );
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the number to be inserted\n");
	scanf("%d",&x);
	if(qfull())
	 printf("stack is full");
	else
	insert(x);
	//printf("Insertion is done");
	break;
case 2: if(qempty())
	printf("empty queue");
	else
	{
	x=del();
	printf("Deleted item %d",x);
	}
	break;
case 3: display();
	break;
case 4:
	exit(0);
	}
printf("\nDo u want to continu ");
ans=getche();
}while(ans=='Y'||ans=='y');
return 0;
}

