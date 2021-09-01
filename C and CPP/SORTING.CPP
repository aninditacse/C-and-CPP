#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,j,temp;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("Enter no. of %d: ",i+1);
 scanf("%d",&a[i]);
}
printf("\n Array elements are: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<=n-1-i;j++)
  {
   if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
}
printf("\n The sorted array is:",a[j]);
for(i=0;i<n;i++)
 printf("%d ",a[i]);
getch();
}