/*) Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1};*/
#include<stdio.h>
int main()
{
	int n,i,temp=0;
	printf("enter the array size:");
	scanf("%d",&n);
	int var[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&var[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=var[i];
		var[i]=var[n-i-1];
		var[n-i-1]=temp;
	}
	printf("\n");
	printf("reverse array\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",var[i]);
	}
}
	
