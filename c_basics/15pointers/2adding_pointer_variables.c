//Write a program to add two variables using their pointers.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a and b:");
	scanf("%d%d",&a,&b);
	int *p1=&a;
	int *p2=&b;
	printf("%d",*p1+*p2);
}
