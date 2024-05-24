/*Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.*/
#include<stdio.h>
int search_element(int array[],int searchelement,int n)
{
	
	int i;
	for(i=0;i<n;i++)
	{
		if(searchelement==array[i])
			return i;
	}
	return -1;
}
int main()
{
	int searchelement,i,index_value,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter an element to search:");
	scanf("%d",&searchelement);
	index_value=search_element(arr,searchelement,n);
	if(index_value==-1)
		printf("element not found");
	else
		printf("element found at index:%d",index_value);
}
