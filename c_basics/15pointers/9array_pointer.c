/*9 Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.*/
#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,0};
	int *ptr=arr;
	for(int i=0;i<10;i++)
	{
		printf("address is :%p,value is:%d\n",ptr,*ptr);
		ptr++;
	}
}
	
