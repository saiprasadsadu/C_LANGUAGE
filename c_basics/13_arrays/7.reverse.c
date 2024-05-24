// Write a program to print an array in reverse order.
#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("actual array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	printf("reverse array\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[n-i-1]);
	}
}
