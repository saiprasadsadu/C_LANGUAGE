//Read n numbers in ascending order. If a number entered is bigger than previous number, then count it. If it is smaller, then dont count it, instead let the loop repeat itself and read another number.
#include<stdio.h>
int main()
{
int n,i=1,number,a,count=0;
printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter decimal numbers:");
	scanf("%d",&number);
	if(i==1)
		a=number;
	else if(a>number)
		printf(" ");
	else
	{
		a=number;
		count+=1;
	}
	i++;	
}
printf("The count is: %d",count);
return 0;
}

