#include<stdio.h>
#include<conio.h>
void heapify_up(int a[],int index)
{
int val=a[index];
while((index>1)&&(a[index/2]<val))
{
 a[index]=a[index/2];
 index=index/2;
}
a[index]=val;
}
void heapify_down(int a[],int index,int n)
{
int val=a[index];
int c=2*index;
while(c<=n)
{
 if((c<n)&&(a[c]<a[c+1]))
  c++;
   if(a[c]<a[c/2])
    break;
   else
    a[c/2]=a[c];
    c=c*2;
}
a[c/2]=val;
}
void main()
{
int a[20],n,i,j,temp;
clrscr();
printf("How many numbers: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("\nEnter the numbers: ");
 scanf("%d",&a[i]);
 heapify_up(a,i);
}
printf("\n\nHeap array is:\n");
for(i=1;i<=n;i++)
printf("%d\t",a[i]);
j=n;
for(i=1;i<=j;i++)
{
 temp=a[1];
 a[1]=a[n];
 a[n]=temp;
 n=n-1;
 heapify_down(a,1,n);
}
n=j;
printf("\n\nThe sorted array is:\n ");
for(i=1;i<=n;i++)
{
 printf("%d\t",a[i]);
}
getch();
}