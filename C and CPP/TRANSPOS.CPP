#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],r,c,i,j;
clrscr();
printf("Enter the order of matrix: ");
scanf("%d",&r);
printf("Enter the column of 1st matrix: ");
scanf("%d",&c);
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    printf("\n Enter no a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
   }
}
printf("\n Matrix is :\n");
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
     printf("%d\t",a[i][j]);

    }
  printf("\n");
}
printf("Transpose matrix will be\n");
for(i=0;i<c;i++)
{
 for(j=0;j<r;j++)
 {
 printf("%d\t",a[j][i]);
 }
 printf("\n");
}
 getch();
}