/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",i);
	}
	printf("\n");
}
}

