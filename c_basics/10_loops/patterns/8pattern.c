/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
int n,i,j,a;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	a=i;
	for(j=1;j<=i;j++)
	{
		printf("%d",a%2);
		a+=1;
	}
	printf("\n");
}
}

