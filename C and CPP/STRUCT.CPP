#include<stdio.h>
#include<conio.h>
struct std
{
char name[30];
int roll,marks;
};
void main()
{
struct std s[10];
int n,i;
clrscr();
printf("enter number of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  printf("Enter name:");
  scanf("%s",s[i].name);
  printf("Enter roll:");
  scanf("%d",&s[i].roll);
  printf("Enter the marks:");
  scanf("%d",&s[i].marks);
 }
 for(i=0;i<n;i++)
 {
 printf("\n%d\t%s\t%d\t",s[i].roll,s[i].name,s[i].marks);
 getch();
 }
}
