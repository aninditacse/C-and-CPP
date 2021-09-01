#include<stdio.h>
#include<conio.h>
void binary_search(int a[],int n,int key)
{
int beg,end,mid;
beg=0;
end=n-1;
mid=(beg+end)/2;
while((beg<=end)&&a[mid]!=key)
{
 if(key<a[mid])
  end=mid-1;
 else
  beg=mid+1;
mid=(beg+end)/2;
}
if(beg>end)
 printf("Does not exit");
else
 printf("Match found in %dth position",mid);
}
void main()
{
int a[20],x,y;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
printf("Enter the numbers: ");
scanf("%d",&a[i]);
}
printf("Enter the searching element: ");
scanf("%d",&y);
binary_search(a,x,y);
getch();
}