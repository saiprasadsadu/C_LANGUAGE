//Write a program to find out if an integer entered by a user is a prime number or not. Count the factors of the given number to identify prime number.
#include<stdio.h>
int main()
{
int a,i,factors=0;
printf("enter a numbers:");
scanf("%d",&a);
for(i=1 ;i<=a;i++)
{
	if(a%i==0)
	factors+=1;
}
if(factors==2)
{
	printf("%d is the prime number\n",a);
}
else
{
	printf("%d is not a prime number\n",a);
}
printf("factors are:%d",factors);
return 0;
}

