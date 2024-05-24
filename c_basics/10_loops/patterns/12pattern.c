/*
without using nested loops :
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main()
{
int n,i=1,j=1;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;)
{
	if(j<=i)
	{
		printf("*");
		j++;
		continue;
	}
	printf("\n");
	j=1;
	i++;
}
}

