#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("enter the array size:");
	scanf("%d",&n);
	int var[n];
	int var1[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&var[i]);
	}
	for(i=0;i<n;i++)
	{	
		for(j=0;j<count;j++)
		{
			if(var[i]==var1[j])
				break;
		}
		if(j==count)
		{
			var1[j]=var[i];
			count++;
		}
	}
	printf("\n");
	printf("array without duplicate elements:");
	for(i=0;i<count;i++)
	{
		printf("%d   ",var1[i]);
	}
}
			


