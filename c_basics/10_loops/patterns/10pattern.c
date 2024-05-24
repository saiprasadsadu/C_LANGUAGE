/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",n-j+1);
	}
	printf("\n");
}
}

