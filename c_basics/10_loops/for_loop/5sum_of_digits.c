#include<stdio.h>
int main()
{
int n,b,sum=0,digit;
printf("enter a number:");
scanf("%d",&n);
for( ;n>0;)
{
	digit=n%10;
	sum+=digit;
	n/=10;
}
printf("sum of the digits is:%d",sum);
return 0;
}

	
