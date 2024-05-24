/*write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
           output : biggest number is repeated 4 times
*/
#include<stdio.h>
int biggest_count(int arr[],int a,int big)
{
	int count,i;
	for(i=0;i<a;i++)
	{
		if(big==arr[i])
			count+=1;
	}
	return count;
}	
int main()
{
	int n,i,big,count=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	int var[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&var[i]);
	}
	big=var[0];
	for(i=0;i<n;i++)
	{
		if(big<var[i])
			big=var[i];
	}
	count=biggest_count(var,n,big);
	printf("the biggest number reapeated :%d",count);
}
		
		
	
