#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,n;
char a[10][20],t[20];
clrscr();
printf("How many names\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the names %d: ",i+1);
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
 for(j=0;j<n-i-1;j++)
  {
   if(strcmp(a[j],a[j+1])>0)
   {
    strcpy(t,a[j]);
    strcpy(a[j],a[j+1]);
    strcpy(a[j+1],t);
   }
  }
 }
 printf("according to dictionary order:\n");
 for(i=0;i<n;i++)
  puts(a[i]);
  getch();
}