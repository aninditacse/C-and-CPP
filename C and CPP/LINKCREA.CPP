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
printf("Enter the value of node %d",i);
scanf("%d",&ptr->info);
*head=ptr;
ptr->link=NULL;
i++;
printf("Press n to discontinue");
ch=getche();
while(ch!='n')
{
 ptr->link=(node *)malloc(sizeof(node));
 ptr=ptr->link;
 printf("Enter the value of node %d",i);
 scanf("%d",&ptr->info);
 ptr->link=NULL;
 i++;
 printf("Press n to discontinue");
 ch=getche();
 }
}
void display(node **head)
{
node *ptr=*head;
printf("Elements of the linked list are: ");
while(ptr!=NULL)
{
printf("%d",ptr->info);
ptr=ptr->link;
}
}
void main()
{
int n;
clrscr();
printf("How many nodes");
scanf("%d",&n);
create(&n);
display(&n);
getch();
}