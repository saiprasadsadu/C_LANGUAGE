//Write a program to read two numbers, and print all prime numbers between the given numbers. print how many prime numbers are there at the end
#include<stdio.h>
int main()
{
int a,b,i,count=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
for( ;a<=b;a++)
{
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		break;
	}
	if(i==a/2+1)
	{
		printf("%d  ",a);
		count+=1;
	}
}
printf("\nthe prime number count is:%d",count);
return 0;
}

