#include<stdio.h>
int main()
{

	int i=0,max=0,second=0,n;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elemnts in an array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	// array logic
	
	for(int j =0;j<n;j++)
	{
		if(arr[j]>max)
		{
			second = max; // if new max value is found store the previous max value ,some cases previous max value will be the second largest
			max = arr[j];
		}
		else if(arr[j]>second && arr[j]!=max)
		{
			second = arr[j];
		}
	}
	printf("second largest elemnt is %d",second);
	return 0;

}
