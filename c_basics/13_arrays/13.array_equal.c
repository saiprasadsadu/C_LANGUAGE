//write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments).
#include<stdio.h>
int size_array(int n1,int n2)
{
	if(n1==n2)
		return 1;
	else
		return 0;
}
int main()
{
	int n1,n2,a,i,count=0;
	printf("enter the size of array1 and array2:");
	scanf("%d%d",&n1,&n2);
	int arr1[n1],arr2[n2];
	a=size_array(n1,n2);
	if(a==1)
	{
		printf("array 1 elements\n");
		for(i=0;i<n1;i++)
		{
			scanf("%d",&arr1[i]);
		}
		printf("\n");
		printf("array 2 elements\n");
		for(i=0;i<n2;i++)
		{
			scanf("%d",&arr2[i]);
		}
		for(i=0;i<n1;i++)
		{
			if(arr1[i]==arr2[i])
			{
				count+=1;
			}
		}
		if(count==n1)
			printf("both arrays are equal");
		else
			printf("arrays are not equal");
			
	}
	else
		printf("the size of 2 arrays are not equal");

}
	
