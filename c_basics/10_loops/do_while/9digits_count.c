#include<stdio.h>
int main()
{
int n,count=0;
printf("enter a number:");
scanf("%d",&n);
do
{
	n/=10;
	count+=1;
}while(n>0);
printf("number of digits is:%d",count);
}

