/*write a function that can take an integer as input and return 1 if the number is prime number,  return 0 if it is not prime and print appropriate output message in main according to output.
return type is integer. function name IsPrime - returns int (0 or 1)*/
#include<stdio.h>
int Isprime(int x)
{
	int i,a=1,b=0;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
			return b;
		
	}
		return a;
}		
int main()
{
int n,prime;
printf("enter a number:");
scanf("%d",&n);
prime=Isprime(n);
if(n<2)
{
	printf("%d is not a prime",n);
}
else if(prime==0)
{
	printf("%d not the prime number ",n);
}
else
	printf("%d is a prime number",n);

return 0;
}

