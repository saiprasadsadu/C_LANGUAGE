#include<stdio.h>
int main()
{
int n,reverse;
printf("enter a number:");
scanf("%d",&n);
do
{
	reverse=n%10;
	n/=10;
	printf("%d",reverse);
}
while(n>0);
}
