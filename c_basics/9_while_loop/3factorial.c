//Write a program to read a number n and print the factorial of n.
#include<stdio.h>
int main()
{
int n,fact=1,i=1;
printf("enetr a number:");
scanf("%d",&n);
if(n<0)
	printf("no factorial for negative numbers");
else 
	while(i<=n)
	{
		fact*=i;
		i+=1;
	}
	printf("factorial of %d is:%d",n,fact);
return 0;
}

