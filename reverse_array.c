#include<stdio.h>
int main()
{
	int size,i,temp;
	printf("enter the size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter array %d elements\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(int j=0;j<size/2;j++)
	{
		temp = arr[j];
		arr[j]=arr[size-j-1];
		arr[size-j-1]=temp;
	}
	printf("print the reverse array\n");
	for(int j=0;j<size;j++)
	{
		printf("%d\t",arr[j]);
	}

}
