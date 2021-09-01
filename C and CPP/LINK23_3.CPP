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
void insert_at_beg(node **head,int x)
 {
  node *ptr;
  ptr=(node *)malloc(sizeof(node));
  ptr->info=x;
  if(*head==NULL)
	ptr->link=NULL;
  else
	{
	 ptr->link=*head;
	}
  *head=ptr;
 }
void insert_at_end(node **head,int x)
 {
  node *ptr,*loc;
  ptr=(node *)malloc(sizeof(node));
  ptr->info=x;
  ptr->link=NULL;
  if(*head==NULL)
   *head=ptr;
  else
   {
    loc=*head;
    while(loc->link!=NULL)
    {
     loc=loc->link;
    }
    loc->link=ptr;
   }
  }
void insert_pos(node **head,int x,int pos)
 {
  int i=1;
  node *ptr,*loc;
  ptr=(node *)malloc(sizeof(node));
  ptr->info=x;
  loc=*head;
  while(i<pos-1)
   {
    loc=loc->link;
    i++;
   }
  if(pos==1)
   {
    ptr->link=*head;
    *head=ptr;
   }
  else
   {
    ptr->link=loc->link;
    loc->link=ptr;
   }
  }
void insert_before(node **head,int before,int x)
 {
  node *ptr,*loc,*preloc;
  ptr=(node *)malloc(sizeof(node));
  ptr->info=x;
  loc=*head;
  while(loc->info!=before)
  {
   preloc=loc;
   loc=loc->link;
  }
 preloc->link=ptr;
 ptr->link=loc;
}
void sort(node **head)
 {
  node *p1,*p2;
  int temp;
  for(p1=*head;p1->link!=NULL;p1=p1->link)
   {
    for(p2=p1->link;p2!=NULL;p2=p2->link)
     {
      if(p1->info>p2->info)
       {
	temp=p1->info;
	p1->info=p2->info;
	p2->info=temp;
       }
      }
     }
   }

void insert_after(node **head,int after,int x)
{
node *loc,*ptr;
ptr=(node *)malloc(sizeof(node));
ptr->info=x;
loc=*head;
while(loc->info!=after)
{
 loc=loc->link;
}
ptr->link=loc->link;
loc->link=ptr;
}
int main()
{
 int choice,n,x;
 char ans;
 node *head=NULL;
 clrscr();
 do
 {
  printf("\n1.create\n2.display\n3.insert at begining\n4.insert at end\n5.any position insertion\n6.insert after a given node\n7.insert before a given node\n8.sorting");
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
		printf("Enter the element ");
		scanf("%d",&x);
		insert_at_beg(&head,x);
		break;
	case 4:
		printf("\nEnter the element: ");
		scanf("%d",&x);
		insert_at_end(&head,x);
		break;
	case 5:
		printf("\nInsert the element: ");
		scanf("%d",&x);
		printf("Enter the position ");
		scanf("%d",&n);
		insert_pos(&head,x,n);
		break;
	case 6:
		printf("Enter the value of the node that you want to insert after a node");
		scanf("%d",&n);
		printf("Enter the element ");
		scanf("%d",&x);
		insert_after(&head,n,x);
		break;
	case 7:
		printf("\Enter the value of the node that you want to insert before ");
		scanf("%d",&n);
		printf("\nEnter the element: ");
		scanf("%d",&x);
		insert_before(&head,n,x);
		break;
	case 8:
		sort(&head);
		break;
	}
  printf("\nDo you want to continue?\n");
  ans=getche();
 }
 while(ans=='Y'||ans=='y');
 return 0;
}


