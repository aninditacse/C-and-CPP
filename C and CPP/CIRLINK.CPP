#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct circular_linked_list
{
int info;
struct circular_linked_list *next;
}node;
//create
void create(node **head)
{
int i=1;
char ch;
node *ptr;
ptr=(node *)malloc(sizeof(node));
printf("\nenter the value of node %d: ",i);
scanf("%d",&ptr->info);
*head=ptr;
ptr->next=*head;
i++;
printf("\npress y to continue: \n");
ch=getche();
while(ch=='Y'||ch=='y')
{
ptr->next=(node *)malloc(sizeof(node));
ptr=ptr->next;
printf("\nenter the value of node %d",i);
scanf("%d",&ptr->info);
ptr->next=*head;
i++;
printf("\npress y to continue\n");
ch=getche();
}
}
//display
void display(node **head)
{
node *ptr=(*head);
printf("\nelements are:");
while(ptr->next!=*head)
{
printf("%d\t",ptr->info);
ptr=ptr->next;
}
printf("%d",ptr->info);
}
int main()
{
int choice,n;
char ans;
node *head=NULL;
clrscr();
do
{
printf("\n1.create\n2.display\n3.delete\nenter your choice: ");
printf("\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
create(&head);
break;
case 2:
display(&head);
break;
/*case 3:
int n;
n=delqueue(&front,&rear);
printf("\deleted item is: %d",n);
break;*/
}
printf("\ndo you want to continue?\n");
ans=getche();
}
while(ans=='Y'||ans=='y');
return 0;
}