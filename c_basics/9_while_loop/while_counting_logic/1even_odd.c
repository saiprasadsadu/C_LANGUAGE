//Read n number of numbers from user (n value taken as input) and print if each number is even or odd.
#include<stdio.h>
int main()
{
int n,i=1,number,evencount=0,oddcount=0;
printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter a decimal number:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is even\n",number);
		evencount+=1;
	}
	else
	{
		printf("%d is odd\n",number);
		oddcount+=1;
	}
	i++;
}
printf("odd count is:%d\n",oddcount);
printf("even count is:%d\n",evencount);
return 0;
}

	
