#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
typedef struct double_linked_list
{
	int info;
	struct double_linked_list *prev;
	struct double_linked_list *next;
}node;
void create(node **head,node **tail)
{
	int i=1;
	char ch;
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	printf("Enter the value of node %d:",i);
	scanf("%d",&ptr->info);
	*head=*tail=ptr;
	ptr->prev=NULL;
	ptr->next=NULL;
	i++;
	printf("press y to continue:");
	fflush(stdin);
	ch=getche();
	while(ch=='y'||ch=='Y')
	{
		ptr->next=(node *)malloc(sizeof(node));
		(ptr->next)->prev=ptr;
		ptr=ptr->next;
		ptr->next=NULL;
		printf("\nEnter the value of node %d:",i);
		scanf("%d",&ptr->info);
		*tail=ptr;
		i++;
		printf("press y to continue:");
		fflush(stdin);
		ch=getche();
	}
}
void display(node **head)
{
	node *ptr=*head;
	printf("\nElements of the double linked list are:");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
}
void delete_beg(node **head,node **tail)
{
	node *ptr;
	ptr=*head;
	if(*head==*tail)
	{
		*head=*tail=NULL;
	}
	else
	{
		(*head)->prev=NULL;
		*head=ptr->next;
	}
	free(ptr);
}
void del_end(node **head,node **tail)
{
	node *ptr;
	ptr=*tail;
	if(*head==*tail)
	{
		*head=*tail=NULL;
	}
	else
	{
		(ptr->prev)->next=NULL;
		*tail=(ptr->prev);

	}
	free(ptr);
}
void delete_after(node **head,int after)
{
	node *ptr,*loc;
	loc=*head;
	while(loc->info!=after)
	{
		loc=loc->next;
	}
	ptr=loc->next;
	loc->next=ptr->next;
	(ptr->next)->prev=loc;
	free(ptr);
}
void delete_before(node **head,node **tail,int before)
{
	node *ptr,*loc;
	loc=*head;
	//ptr=*head;
	if(*head==*tail)
	{
	*head=*tail=NULL;
	}
	else
	{
	while(before!=loc->info)
	{loc=loc->next;
	}
	ptr=loc->prev;
	loc->prev=ptr->prev;
	(ptr->prev)->next=loc;
	}
	free(ptr);

		//ptr->prev=NULL;
		//loc=loc->next;
		//loc->prev=NULL;
		//*head=loc;
		//free(ptr);
	}

void delete_pos(node **head,node **tail,int x)
{
	node *ptr;
	ptr=*head;
	while(ptr->info!=x)
	{
		ptr=ptr->next;
	}
	if(*head==*tail)
	{
		*head=*tail=NULL;
	}
	else
	{
		(ptr->prev)->next=ptr->next;
		(ptr->next)->prev=ptr->prev;
	}
	free(ptr);
}
int main()
{
	int choice,x,n;
	char ans;
	node *head=NULL;
	node *tail=NULL;
	clrscr();
	do
	{
		printf("\n1.create\n2.display\n3.delete at begining\n4.delete at end\n5.delete at after\n6.delete at before\n7.delete at position");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{


			case 1:
				create(&head,&tail);
				break;
			case 2:
				display(&head);
				break;

			case 3:	delete_beg(&head,&tail);
				break;
			case 4:
				del_end(&head,&tail);
				break;
			case 5:
				printf("\nEnter the value of node:");
				scanf("%d",&n);
				delete_after(&head,n);
				break;
			case 6:
				printf("\nEnter the value of the node:");
				scanf("%d",&n);
				delete_before(&head,&tail,n);
				break;
			case 7:
				printf("\n Enter the value of the node:");
				scanf("%d",&n);
				delete_pos(&head,&tail,n);
				break;
		}
		printf("\nDo you want to continue?");
		ans=getche();
	}while(ans=='y'||ans=='Y');
	return 0;
}



