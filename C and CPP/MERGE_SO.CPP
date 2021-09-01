#include<stdio.h>
#include<conio.h>
void merge(int a[],int lb,int le,int rb,int re);
void merge_sort(int a[],int beg,int end)
{
int mid;
if(beg<end)
{
 mid=(beg+end)/2;
 merge_sort(a,beg,mid);
 merge_sort(a,mid+1,end);
 merge(a,beg,mid,mid+1,end);
 }
}
void merge(int a[20],int lb,int le,int rb,int re)
{
 int c[20],i,j,k,m;
 i=lb;
 j=rb;
 k=0;
 while((i<=le)&&(j<=re))
 {
  if(a[i]<a[j])
  {
   c[k]=a[i];
   i++;
  }
  else
  {
   c[k]=a[j];
   j++;
  }
  k++;
}
if(i>le)
{
 while(j<=re)
 {
  c[k]=a[j];
  j++;
  k++;
 }
}
else if(j>re)
{
 while(i<=le)
 {
  c[k]=a[i];
  i++;
  k++;
 }
}
for(m=lb;m<re;m++)
{
 a[m]=c[m];
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
merge_sort(a,0,x-1);
printf("Sorted array is: ");
for(i=0;i<x;i++)
{
printf("%d\t ",a[i]);
}
getch();
}