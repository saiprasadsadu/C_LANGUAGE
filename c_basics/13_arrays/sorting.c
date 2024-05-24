#include<stdio.h>
int main()
{
	int n,i,j,big,temp;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	int var[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	
		}
	}
	printf("\n");
	printf("sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
