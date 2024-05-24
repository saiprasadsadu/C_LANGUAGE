//Write a function to modify the array such that all negative numbers are converted to positive.
#include<stdio.h>
int positive_negative(int num)
{
	if(num>0)
		return num;
	else
		return -num;
}
int main()
{
	int n,i,var[n],value;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&var[i]);
		value=positive_negative(var[i]);
		var[i]=value;
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",var[i]);
	}
}
	

