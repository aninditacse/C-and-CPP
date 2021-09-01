#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20],k,f,l,m;
clrscr();
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter %d integers\n",n);
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("Enter the searching element\n");
scanf("%d",&k);
f=0;
l=n-1;
m=(f+l)/2;
while(f<=l)
{
 if(a[m]<k)
  f=m+1;
 else if(a[m]==k)
 {
 printf("%d found at location %d\n",k,m+1);
 break;
}
else
l=m-1;
m=(f+l)/2;
}
if(f>l)
 printf("not found %d is not present in the list\n",k);
 getch();
}