#include<stdio.h>
#include<conio.h>
long int fact(int n);
void main()
{
int i,n;
clrscr();
double sum=0.0;
printf("Enter number of range: ");
scanf("%d",&n);
for(i=1;i<=n+1;i++)
{
printf("\t1/%d!+",(i-1));
long int d=fact(i-1);
double s=(1/double(d));
sum=sum+s;
}
printf("\nSum:%lf",sum);
getch();
}
long int fact(int n)
{
long int f=1;
int i;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}