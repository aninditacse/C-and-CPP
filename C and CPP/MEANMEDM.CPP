#include<stdio.h>
#include<conio.h>
int sum(int x[],int n)
{
int y,sum=0;
for(y=0;y<n;y++)
{
sum=sum+x[y];
}
return(sum);
}
int main()
{
int choice,n;
char ans;
clrscr();
/*printf("\nEnter how many no you want to insert:");
scanf("%d",&n);*/
do
{
printf("\nEnter your choice\n1.mean(grouped)\n2.mean(ungrouped)\n3.median(grouped)\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	int wi[5],fi[5],wifi[5],i;
	float mean,r=0.0,s=0.0;;
	for(i=0;i<5;i++)
	{
	printf("\nEnter the value of wi[%d]:",i);
	scanf("%d",&wi[i]);
	printf("\nEnter the value of fi[%d]:",i);
	scanf("%d",&fi[i]);
	wifi[i]=wi[i]*fi[i];
	}
	for(i=0;i<5;i++)
	{
	printf("\nwifi[%d]=%d",i,wifi[i]);
	}
	printf("\n");
	s=sum(wifi,5);
	printf("\ns=%f",s);
	r=sum(fi,5);
	printf("\nr=%f",r);
	mean=(s/r);
	printf("\nMean=%f",mean);
	break;
case 2:
	int j,xi[9];
	float mean1,u=0.0;
	for(j=0;j<9;j++)
	{
	printf("\nenter the value of xi[%d]:",j);
	scanf("%d",&xi[j]);
	}
	u=sum(xi,9);
	mean1=(u/9);
	printf("\nmean of ungrouped data=%f",mean1);
	break;
case 3:
	int c[8],xk[8],fk[8],ck[8],k;
	float lo,hi,N,sm,h,t,a,median;
	for(k=0;k<8;k++)
	{
	printf("enter the lower and higher range of xk[%d]:",k);
	scanf("%f%f",&lo,&hi);
	}
	for(k=0;k<8;k++)
	{
	printf("enter the value of fk[%d]:",k);
	scanf("%d",&fk[k]);
	}
	sm=sum(fk,8);
	N=(sm/2);
	printf("value of N/2=%f",N);
	ck[0]=0+fk[0];
	printf("\nck[0]=%d",ck[0]);
	for(k=1;k<=7;k++)
	{
	ck[k]=ck[k-1]+fk[k];
	printf("\nck[%d]=%d",k,ck[k]);
	}
	printf("\n");
	for(k=0;k<8;k++)
	{
	if(ck[k]>N)
	{
	 h=((hi-lo)/fk[k]);
	t=(N-ck[k-1]);
	a=lo+(h*t);
	printf("\nmedian=%f",a);
	}
	else
	printf("\nmedian not found");
	}
	break;
}
printf("\nDo u want to continue?: ");
ans=getche();
}while(ans=='y'||ans=='Y');
return 0;
}


