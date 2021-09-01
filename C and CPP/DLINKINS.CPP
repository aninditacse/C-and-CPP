#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
typedef struct dlinked_list
{
int info;
struct dlinked_list *prev;
struct dlinked_list *next;
}node;
void create(node **head,node **tail)
{
int i=1;
char ch;
node *ptr;
ptr=(node *)malloc(sizeof(node));
printf("\nEnter the value of the node %d ",i);
scanf("%d",&ptr->info);
*head=*tail=ptr;
ptr->next=ptr->prev=NULL;
i++;
printf("\nPress y to continue ");
fflush(stdin);
ch=getche();
while(ch=='Y'||ch=='y')
{
ptr->next=(node *)malloc(sizeof(node));
(ptr->next)->prev=ptr;
ptr=ptr->next;
ptr->next=NULL;
printf("\nEnter the value of the node %d ",i);
scanf("%d",&ptr->info);
*tail=ptr;
i++;
printf("\nPress y to continue ");
fflush(stdin);
ch=getche();
}
}
void display(node **head)
{
node *ptr=*head;
printf("\nElements of the linked lis are:\n");
while(ptr!=NULL)
{
printf("%d\t",ptr->info);
ptr=ptr->next;
}
}
void insert_beg(node **head,node **tail,int x)
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
ptr->info=x;
if(*head==NULL)
{
 ptr->prev=ptr->next=NULL;
 *head=*tail=ptr;
 }
else
{
 ptr->prev=NULL;
 ptr->next=*head;
 (*head)->prev=ptr;
 *head=*tail=ptr;
}
}
void insert_end(node **head,node **tail,int x)
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
ptr->info=x;
if(*head==NULL)
{
 ptr->prev=ptr->next=NULL;
 *head=*tail=NULL;
}
else
 {
  ptr->next=NULL;
  ptr->prev=*tail;
  (*tail)->next=ptr;
  *tail=ptr;
 }
}
void insert_after(node **head,node **tail,int after,int x)
{
 node *ptr,*loc;
 ptr=(node *)malloc(sizeof(node));
 ptr->info=x;
 loc=*head;
 while(loc->info!=after)
 {
  loc=loc->next;
 }
 if(loc->next==NULL)
 {
  ptr->next=NULL;
  ptr->prev=loc;
  loc->next=ptr;
  *tail=ptr;
 }
else
{
 ptr->prev=loc;
 ptr->next=loc->next;
 loc->next=ptr;
 (ptr->next)->prev=ptr;
}
}
void insert_before(node **head,node **tail,int before,int x)
{
 node *ptr,*loc;
 ptr=(node *)malloc(sizeof(node));
 ptr->info=x;
 loc=*head;
 while(loc->info!=before)
 {
  loc=loc->next;
 }
 if(loc->prev==NULL)
 {
  ptr->next=NULL;
  ptr->prev=loc;
  loc->next=ptr;
  *tail=ptr;
 }
else
{
 ptr->next=loc;
 ptr->prev=loc->prev;
 (loc->prev)->next=ptr;
 loc->prev=ptr;
}
}
void insert_sp(node **head,node **tail,int pos,int x)
{
 node *ptr,*loc;
 int i=1;
 ptr=(node *)malloc(sizeof(node));
 ptr->info=x;
 loc=*head;
 while(i<pos-1)
 {
  loc=loc->next;
  i++;
 }
 if(loc->next==NULL)
 {
  ptr->next=NULL;
  ptr->prev=loc;
  loc->next=ptr;
  *tail=ptr;
 }
else
{
 ptr->prev=loc;
 ptr->next=loc->next;
 loc->next=ptr;
 (ptr->next)->prev=ptr;
}
}
int main()
{
 int choice,n,x;
 char ans;
 node *head=NULL;
 node *tail=NULL;
 clrscr();
 do
 {
  printf("\n1.create\n2.display\n3.insert at begining\n4.insert at end\n5.any position insertion\n6.insert after a given node\n7.insert before a given node\n8.sorting");
  printf("\nEnter your choice ");
  scanf("%d",&choice);
  switch(choice)
	{
	case 1:
		create(&head,&tail);
		break;
	case 2:
		display(&head);
		break;
	case 3:
		printf("Enter the element ");
		scanf("%d",&n);
		insert_beg(&head,&tail,n);
		break;
	case 4:
		printf("Enter the element ");
		scanf("%d",&n);
		insert_end(&head,&tail,n);
		break;
	case 6:
		printf("Enter the value of the node that you want to insert after the node ");
		scanf("%d",&x);
		printf("Enter the element ");
		scanf("%d",&n);
		insert_after(&head,&tail,x,n);
		break;
	case 7:
		printf("Enter the value of the node that you want to insert before the node ");
		scanf("%d",&x);
		printf("Enter the element ");
		scanf("%d",&n);
		insert_before(&head,&tail,x,n);
		break;
	case 5:
		printf("Enter the position ");
		scanf("%d",&x);
		printf("Enter the element ");
		scanf("%d",&n);
		insert_sp(&head,&tail,x,n);
		break;


}
 printf("\nDo you want to continue?\n");
  ans=getche();
 }
 while(ans=='Y'||ans=='y');
 return 0;
}
