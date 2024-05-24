//Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.
#include<stdio.h>
int main()
{
	int i,small,big,index1=0,index2=0,n;
	int arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	big=arr[0];
	for(i=0;i<10;i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
			index1=i;
		}
		if(big<arr[i])
		{
			big=arr[i];
			index2=i;
		}
	}
	printf("the smallest element is:%d and its index value:%d\n",small,index1);
	printf("the biggest element is:%d and its index value:%d\n",big,index2);
}
