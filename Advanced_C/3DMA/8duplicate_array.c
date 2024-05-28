/*
8)  Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. 
Assume that the input arrays are sorted.
eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20	*/
int *sorting(int *ptr1,int n);
int  * duplicate_array(int *ptr1,int *ptr2,int n1,int n2);
int *sorting(int *ptr1,int n);
int count=0;
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n1,n2,small;
	printf("enter the number of elements\n");
	scanf("%d",&n1);
	printf("enter the number of elements\n");
	scanf("%d",&n2);
	int *ptr1=malloc(n1*sizeof(int));
	int *ptr2=malloc(n2*sizeof(int));
	if(ptr1==NULL||ptr2==NULL)
	{
		printf("memory not allocated\n");
		exit(0);//return 0;
	}
	printf("enter array1 elements\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",ptr1+i);
	}
	
	printf("enter array2 elements\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",ptr2+i);
	}
	int *ret1=sorting(ptr1,n1);
	int *ret2=sorting(ptr2,n2);	
	/*for(i=0;i<n1;i++)
	{
		printf("%d",*(ret1+i));
	}*/
	int *ret=duplicate_array(ret1,ret2,n1,n2);
	int *ret4=sorting(ret,count);
	printf("printing array without duplicates\n");
	for(i=0;i<count;i++)
	{
		printf("%d  ",*(ret4+i));
	}
	free(ptr1);
	free(ptr2);
	free(ret);

}
int *sorting(int *ptr1,int n)
{
	
	int i,j,small;
	//sorting logic
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr1[i]>ptr1[j])
			{
				small=ptr1[i];
				ptr1[i]=ptr1[j];
				ptr1[j]=small;
			}
		}
	}
	return ptr1;
}



int  * duplicate_array(int *ptr1,int *ptr2,int n1,int n2)
{
	int i,j;
	int *ptr3=(int *)malloc((n1+n2)*sizeof(int));
	if(ptr3==NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}
	int *ptr4=(int *)malloc((n1+n2)*sizeof(int));
	if(ptr4==NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}
	for(i=0;i<n1;i++)
	{
		*(ptr3+i)=*(ptr1+i);
	}
	for(i=0;i<n2;i++)
	{
		*(ptr3+n1+i)=*(ptr2+i);
	}
	printf("checking the array\n");
	for(i=0;i<(n1+n2);i++)
	{
		printf("%d  ",*(ptr3+i));
	}
	//eliminating the duplicates from an array 
	/*for(i=0;i<(n1+n2);i++)
	{	
		for(j=0;j<count;j++)
		{
			if(*(ptr3+i)==*(ptr4+j))
				break;
		}
		if(j==count)
		{
			*(ptr4+j)=*(ptr3+i);
			count++;
		}
	}*/
	for(i=0;i<(n1+n2);i++)
	{
		for(j=0;j<count;j++)
		{
			if(ptr3[i]==ptr4[j])
				break;
		}
		if(j==count)
		{
			ptr4[j]=ptr3[i];
			count++;
		}
	}
	free(ptr3);
	return ptr4;

	
}

	
	
	
