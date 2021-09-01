#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct linked_list
{
int info;
struct linked_list *link;
}node;
int count(node **head)
{
node *ptr;
int i=0;
ptr=*head;
while(ptr!=NULL)
{
i=i+1;
ptr=ptr->link;
printf("count=",i);
}
return i;
}
int del(node **head)
{
node *ptr;
if(*head==NULL)
 return 1;
else
{
ptr=*head;
}
*head=ptr->link;
free(ptr);
}
int del_last(node **head)
{
node *preloc,*loc;
if(*head==NULL)
 return 1;
loc=*head;
while(loc->link!=NULL)
{
 preloc=loc;
 loc=loc->link;
}
preloc->link=NULL;
free(loc);
}
void display(node **head)
{
  node *ptr=*head;
  printf("\nElements of the linked list are: \n");
  while(ptr!=NULL)
   {
	printf("%d\t",ptr->info);
	ptr=ptr->link;
   }
}
int main()
{
int choice,n;
char ch;
node *head=NULL;
clrscr();
do
{
printf("\n1.count\n2.delete begining node\3.delete ending node\4.display\n");
printf("Enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
	count(&head);
	break;
case 2:
	del(&head);
	break;
case 3:
	del_last(&head);
	break;
case 4:
	display(&head);
	break;
}
printf("\nDo u want to continue? ");
 ch=getche();
 }while(ch=='Y'||ch=='y');
 return 0;
}

