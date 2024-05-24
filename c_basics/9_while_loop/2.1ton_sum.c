//write a program to read a number n, and print sum of all the numbers from 1 to n.
#include<stdio.h>
int main()
{
int n,sum=0,i=1;
printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	sum+=i;
	i=i+1;
}
printf("%d",sum);
return 0;
}
