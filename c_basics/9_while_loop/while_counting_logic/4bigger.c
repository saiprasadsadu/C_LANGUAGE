//Read n numbers from user, and while reading every number, print if the number is bigger or smaller than the previous number. For first number, there wont be any output as it is the first one.
#include<stdio.h>
int main()
{
int n,i=1,number,a;
printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter decimal numbers:");
	scanf("%d",&number);
	if(i==1)
		a=number;
	else if(a>number)
		printf("%d  is small\n",number);
	else
	{
		printf("%d is big\n",number);
		a=number;
	}
	i++;	
}
}
