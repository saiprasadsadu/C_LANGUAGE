/*Write a program to swap two arrays in reverse order.
eg.,
input : array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};
output:
            array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}
*/
#include<stdio.h>
int main()
{
	int n,i,temp=0;
	printf("enter the array size:");
	scanf("%d",&n);
	int var1[n],var2[n];
	printf("first array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&var1[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=var1[i];
		var1[i]=var1[n-i-1];
		var1[n-i-1]=temp;
	}
	printf("second array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&var2[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=var2[i];
		var2[i]=var2[n-i-1];
		var2[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		temp=var1[i];
		var1[i]=var2[i];
		var2[i]=temp;
	}
	printf("after swap first array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",var1[i]);
	}
	printf("\n");
	printf("after swap second array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",var2[i]);
	}
	
}
