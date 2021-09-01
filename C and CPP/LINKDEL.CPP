#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct linked_list
{
int info;
struct linked_list *link;
}node;
void create(node **head)
{
 int i=1;
 char ch;
 node *ptr;
 ptr=(node *)malloc(sizeof(node));
 printf("\nEnter the value of node %d: ",i);
 scanf("%d",&ptr->info);
 *head=ptr;
 ptr->link=NULL;
 i++;
 printf("\nPress y to continue to create linked list");
 ch=getche();
 while(ch=='Y'||ch=='y')
  {
	ptr->link=(node *)malloc(sizeof(node));
	ptr=ptr->link;
	printf("\nEnter the value of node %d: ",i);
	scanf("%d",&ptr->info);
	ptr->link=NULL;
	i++;
	printf("\nPress y to continue to create linked list");
	ch=getche();
  }
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
void del_beg(node **head)
{
node *ptr;
if(*head==NULL)
 return;
ptr=*head;
*head=ptr->link;
free(ptr);
}
void del_last(node **head)
{
node *preloc,*loc;
if(*head==NULL)
 return;
loc=*head;
while(loc->link!=NULL)
{
 preloc=loc;
 loc=loc->link;
}
preloc->link=NULL;
free(loc);
}
void del_after(node **head,int after)
{
node *loc,*ptr;
loc=*head;
while(loc->info!=after)
{
 loc=loc->link;
}
ptr=loc->link;
loc->link=ptr->link;
free(ptr);
}
void del_sp(node **head,int value)
{
node *ptr,*loc;
int i;
ptr=*head;
if(ptr->info==value)
{
 *head=ptr->link;
}
else
{
 while(ptr->info!=value)
 {
  loc=ptr;
  ptr=ptr->link;
 }
 loc->link=ptr->link;
}
free(ptr);
}
void reverse(node **head)
{
node *c_node,*p_node,*n_node;
c_node=*head;
p_node=NULL;
n_node=c_node->link;
c_node->link=NULL;
while(n_node!=NULL)
{
 p_node=c_node;
 c_node=n_node;
 n_node=c_node->link;
 c_node->link=p_node;
}
*head=c_node;
}
int main()
{
 int choice,n;
 char ans;
 node *head=NULL;
 clrscr();
 do
 {
  printf("\n1.Create\n2.Display\n3.Delete a node from begining\n4.Delete a node from end\n5.Delete a node after a given node\n6.Delete a specific node\n7.Reverse");
  printf("\nEnter your choice ");
  scanf("%d",&choice);
  switch(choice)
	{
	case 1:
		create(&head);
		break;
	case 2:
		display(&head);
		break;
	case 3:
		del_beg(&head);
		break;
	case 4:
		del_last(&head);
		break;
	case 5:
		printf("Enter the value of the node ");
		scanf("%d",&n);
		del_after(&head,n);
		break;
	case 6:
		printf("Enter the value of the node ");
		scanf("%d",&n);
		del_sp(&head,n);
		break;
	case 7:
		reverse(&head);
		break;
  }
printf("\nDo you want to continue? ");
ans=getche();
}while(ans=='Y'||ans=='y');
 return 0;
}
