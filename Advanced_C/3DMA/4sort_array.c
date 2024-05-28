//4) Create a dynamic array of integers. Take input from user , sort the array and display the output.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,small;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	void *ptr;
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated\n");
		exit(0);//return 0;
	}
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	//sorting logic
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
				small=ptr[j];
				ptr[j]=ptr[i];
				ptr[i]=small;
			}
		}
	}
	printf("printing the sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
	return 0;
}
	
	
