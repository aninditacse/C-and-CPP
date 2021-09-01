#include<stdio.h>
#include<conio.h>
int binary_search(int a[],int beg,int end,int key)
{
int mid;
if(beg>end)
 return -1;//printf("Does not exit");
else
{
 mid=(beg+end)/2;
  if(a[mid]==key)
  return (mid); //printf("Match found in %dth position",mid);
  else if(key<a[mid])
  return binary_search(a,beg,mid-1,key);
  else
  return binary_search(a,mid+1,end,key);
 }
}
int main()
{
int a[20],x,y,n,k,m;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
printf("Enter the numbers: ");
scanf("%d",&a[i]);
}
n=0;
k=x-1;
printf("Enter the searching element: ");
scanf("%d",&y);
m=binary_search(a,n,k,y);
if(m!=-1)
{
 printf("Match found in %dth position",m);
 }
else
 printf("Does not exit");
getch();
return 0;
}
