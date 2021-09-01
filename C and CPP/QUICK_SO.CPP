#include<stdio.h>
#include<conio.h>
int split_array(int a[],int beg,int end);
void quick_sort(int a[],int beg,int end)
{
 int loc,t;
 if(beg<end)
 {
 loc=split_array(a,beg,end);
 quick_sort(a,beg,loc-1);
 quick_sort(a,loc+1,end);
 }
}
int split_array(int a[],int beg,int end)
{
 int left,right,loc,t,flag;
 left=loc=beg;
 right=end;
 flag=0;
 while(flag!=1)
 {
  while((a[loc]<=a[right])&&(loc!=right))
  {
   right--;
  }
  if(loc==right)
   flag=1;
  else if(a[loc]>a[right])
  {
   t=a[loc];
   a[loc]=a[right];
   a[right]=t;
   loc=right;
  }
  if(flag!=0)
   {
    while((a[loc]>=left)&&(loc!=left))
    {
     left++;
    }
    if(loc==left)
    {
     flag=1;
    }
    else if(a[loc]<a[left])
    {
     t=a[loc];
     a[loc]=a[left];
     a[left]=t;
     loc=left;
    }
   }
  }
 return loc;
}
void main()
{
int a[20],x,y,z;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
printf("Enter the numbers: ");
scanf("%d",&a[i]);
}
quick_sort(a,0,x-1);
printf("Sorted array is: ");
for(i=0;i<x;i++)
{
printf("%d\t ",a[i]);
}
getch();
}