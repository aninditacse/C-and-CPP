#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,flag=0,k;
float avg;
clrscr();
printf("Enter how many numbers you want to insert: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter number %d: ",i+1);
scanf("%d",&a[i]);
}
printf("\nArray elements are: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nEnter the number you want to search\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
 if(a[i]==k)
  {
   flag=1;
   break;
  }
}
if(flag==1)
 printf("%d is present at %dth position of the array",k,i+1);
else
 printf("%d does not exist in the array",k);
getch();
 }