/*Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer*/
#include<stdio.h>
int main()
{
	int a,b,c,*ptr;
	printf("enter 3 integers:");
	scanf("%d%d%d",&a,&b,&c);
	ptr=&a;
	ptr=&b;
	ptr=&c;
	printf(" integer value %d",*ptr);
}
