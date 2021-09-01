#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n)
{
 int i,j,t;
 for(i=1;i<=n-1;i++)
 {
  t=a[i];
  j=i-1;
  while((t<a[j])&&(j>=0))
  {
   a[j+1]=a[j];
   j=j-1;
  }
 a[j+1]=t;
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
insertion_sort(a,x);
printf("Sortedc array is: ");
for(i=0;i<x;i++)
{
printf("%d\t ",a[i]);
}
getch();
}