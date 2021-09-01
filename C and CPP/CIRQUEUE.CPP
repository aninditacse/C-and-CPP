#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
typedef struct
{
int rear,front;
int ar[max];
}queue;
int full(queue *q)
{
if(q->front==(q->rear+1)%max)
 return 1;
else
 return 0;
}
int empty(queue *q)
{
 if(q->front==-1)
  return 1;
 else
  return 0;
}
void insert(queue *q,int x)
{
 if(full(q))
  {
   printf("Queue is full");
   return ;
  }
  else
   {
    if(q->front==-1)
     {
      q->front=0;
      q->rear=0;
      q->ar[q->rear]=x;
     }
     else
      {
      q->rear=(q->rear+1)%max;
      q->ar[q->rear]=x;
   }   }
 }
int remove(queue *q)
{
int x;
if(empty(q))
 {
  printf("Queue is empty");
  return 1;
  }
  x=q->ar[q->front];
if(q->front==q->rear)
{
q->front=-1;
q->rear=-1;
}
else
 q->front=(q->front+1)%max;
return x;
}
void display(queue *q)
{
int i;
if(empty(q))
{
printf("Queue is empty");
}
if(q->front<q->rear)
{
 for(i=q->front;i<=q->rear;i++)
  printf("%d\t",q->ar[i]);
}
else
{
for(i=q->front;i<=max-1;i++)
 printf("%d\t",q->ar[i]);
for(i=0;i<=q->rear;i++)
 printf("%d\t",q->ar[i]);
 }
}
int main()
{
queue q;
q.front=-1;
q.rear=-1;
int choice,a;
char ans;
clrscr();
do
{
printf("\n1.insert \n2. delete \n3.display \n4.exit");
printf("\nEnter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("Enter the element\n");
	scanf("%d",&a);
	insert(&q,a);
	break;
case 2:
	a=remove(&q);
	printf("deleted element is %d",a);
	break;
case 3:
	display(&q);
	break;
case 4:
	exit(0);
}
printf("\ndo u want to continue?");
ans=getche();
}while(ans=='Y'||ans=='y');
return 0;
}