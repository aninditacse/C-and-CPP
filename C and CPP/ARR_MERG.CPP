#include<stdio.h>
#include<conio.h>
void sort(int p[],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(p[j]>p[j+1])
   {
    t=p[j];
    p[j]=p[j+1];
    p[j+1]=t;
    }
   }
  }
  for(i=0;i<n;i++)
  printf("%d\t",p[i]);
}
void merge(int a[],int b[],int n)
{
int i,j,k,m[10];
for(i=0;i<n;i++)
{
 m[i]=a[i];
 }
for(i=0,k=n;k<n&&i<n;i++,k++)
{
 m[k]=b[i];
}
for(i=0;i<n;i++)
printf("%d",m[i]);
}
void main()
{
int a[]={10,5,15};
int b[]={20,3,2};
//int x,y;
clrscr();
printf("Sort of a is\n");
sort(a,3);
printf("\nSort of b is\n");
sort(b,3);
printf("\nFinal sort is\n");
merge(a,b,3);

getch();
}