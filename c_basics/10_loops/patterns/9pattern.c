/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("%d",n-i);
	}
	printf("\n");
}
}

