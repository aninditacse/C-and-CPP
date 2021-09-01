#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
typedef struct poly
{
int coeff;
int power;
struct poly *next;
}node;
void add_node(node **start,int co,int po)
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
ptr->coeff=co;
ptr->power=po;
if(*start==NULL)
 {
  *start=ptr;
  ptr->next=NULL;
 }
else
{
ptr->next=*start;
*start=ptr;
}
}
void poly_add(node **start1,node **start2,node **start3)
{
node *ptr1,*ptr2;
int c,p;
ptr1=*start1;
ptr2=*start2;
while(ptr1!=NULL&&ptr2!=NULL)
{
 if(ptr1->power==ptr2->power)
 {
  c=ptr1->coeff+ptr2->coeff;
  p=ptr1->power;
  add_node(start3,c,p);
  ptr1=ptr1->next;
  ptr2=ptr2->next;
 }
 else if(ptr1->power>ptr2->power)
 {
  c=ptr1->coeff;
  p=ptr1->power;
  add_node(start3,c,p);
  ptr1=ptr1->next;
 }
 else if(ptr1->power<ptr2->power)
 {
  c=ptr2->coeff;
  p=ptr2->power;
  add_node(start3,c,p);
  ptr2=ptr2->next;
 }
}
if(ptr1==NULL)
{
 while(ptr2!=NULL)
 {
  c=ptr2->coeff;
  p=ptr2->power;
  add_node(start3,c,p);
  ptr2=ptr2->next;
}
 if(ptr2==NULL)
 {
  while(ptr1!=NULL)
  {
   c=ptr1->coeff;
   p=ptr1->power;
   add_node(start3,c,p);
   ptr1=ptr1->next;
  }
  }
}
}
void display(node **start)
{
node *ptr=*start;
printf("\nelements are:");
while(ptr!=NULL)
{
printf("%d\t",ptr->coeff);
ptr=ptr->next;
}
}
int main()
{
 int choice,n,x;
 char ans;
 node *start=NULL;
 clrscr();
 do
 {
  printf("\n1.create\n2.display\n3.add\n");
  printf("\nEnter your choice ");
  scanf("%d",&choice);
  switch(choice)
	{
	case 1:
		printf("Enter 1st element ");
		scanf("%d",&n);
		printf("Enter 2nd element ");
		scanf("%d",&x);
		add_node(&start,n,x);
		break;
	case 2:
		display(&start);
		break;
	case 3:

		printf("Result: ");
		poly_add(&start,&start,&start);
		break;
  }
  printf("\nDo you want to continue?\n");
  ans=getche();
 }
 while(ans=='Y'||ans=='y');
 return 0;
}
