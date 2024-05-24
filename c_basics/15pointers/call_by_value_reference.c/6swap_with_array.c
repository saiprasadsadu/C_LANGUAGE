//Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.
#include<stdio.h>
#include"my.h"
int main()
{
	int arr[2]={4,5};
	printf("before swap arr[0]=%d arr[1]=%d\n",arr[0],arr[1]);
	swap(arr);//array itself is a pointer arr in swap is nothing but array address.
	printf("after swap arr[0]=%d arr[1]=%d\n",arr[0],arr[1]);
}
