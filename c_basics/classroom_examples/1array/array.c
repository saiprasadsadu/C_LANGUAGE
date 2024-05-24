//write a program to read 1 to 100 and also print the all elements
#include<stdio.h>
int main()
{
	int arr[100];
	int i;
	for(i=0;i<100;i++)
	{
		arr[i]=i;
		printf("%d  %p\n",arr[i],&arr[i]);
	}
}
		

