//Write a program to find the biggest of three numbers using pointers that point to those numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,*p1=NULL,*p2=NULL,*p3=NULL,big=0;
	printf("enter 3 integers:");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a,p2=&b,p3=&c;
	big=*p1;
	//(big<*p2)?big=*p2:(big<*p3)?big=*p3:printf("%d",big);
	if(big<*p2)
		big=*p2;
	if(big<*p3)
		big=*p3;
	printf("the biggest number is:%d",big);
}
