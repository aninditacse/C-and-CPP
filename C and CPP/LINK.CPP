#include<stdio.h>
#include<conio.h>
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
printf("Enter the value of node %d",i);
scanf("%d",&ptr->info);
*head=ptr;
ptr->link=NULL;
i++;
printf("Press n to discontinue");
ch=getchar();
while(ch!='n')
{
ptr->link=(node *)malloc(sizeof(node));
ptr=ptr->link;
printf("Enter the value of node %d",i);
scanf("%d",&ptr->info);
ptr->link=NULL;
i++;
printf("Press n to discontinue");
ch=getchar();
}
}
void insert(node **head,int x)
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
ptr->info=x;
if(*head==NULL)
ptr->link=NULL;
else
{
 ptr->link=*head;
 *head=ptr;
}
}
void display(node **head)
{
node *ptr=*head;
printf("Elements of the linked lis are:");
while(ptr!=NULL)
{
printf("%d",ptr->info);
ptr=ptr->link;
}
}
void main()
{
int n,choice;
clrscr();
printf("\n1.create\n2.insert\n3.display");
printf("Enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1: create(&n);
	break;
case 2: printf("Enter elements");
	scanf("%d",&n);
	insert(&n,int );
	break;
case 3:	display(&n)
break;
}
}