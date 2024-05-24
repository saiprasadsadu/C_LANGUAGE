//Write a function that can rotate the values of three variables. print the results in the main function.
#include<stdio.h>
void swapcbr(int*,int*,int*);
int main()
{
	int a,b,c;
	printf("enter 3 integers:");
	scanf("%d%d%d",&a,&b,&c);
	swapcbr(&a,&b,&c);
}
void swapcbr(int *p1,int *p2,int *p3)
{
	printf("before swap a=%d,b=%d,c=%d\n",*p1,*p2,*p3);
	*p1=*p1+*p2+*p3;
	*p3=*p1-*p2-*p3;
	*p2=*p1-*p2-*p3;
	*p1=*p1-*p2-*p3;
	printf("after swap a=%d,b=%d,c=%d",*p1,*p2,*p3);
}
	
	
