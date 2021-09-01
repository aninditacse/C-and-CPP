#include<stdio.h>
#include<conio.h>
void selection_sort(int a[],int n)
{
 int i,j,min,loc,temp;
 for(i=0;i<=n-1;i++)
 {
  min=a[i];
  loc=i;
   for(j=i+1;j<=n-1;j++)
   {
    if(a[j]<min)
     {
      min=a[j];
      loc=j;
     }
  }
 if(loc!=i)
 {
  temp=a[i];
  a[i]=a[loc];
  a[loc]=temp;
 }
}
}
void main()
{
int a[20],x;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
printf("Enter the numbers: ");
scanf("%d",&a[i]);
}
selection_sort(a,x);
printf("Sortedc array is: ");
for(i=0;i<x;i++)
{
printf("%d\t ",a[i]);
}
getch();
}