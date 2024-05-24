//WAP Swap any two numbers using bitwise operators. How does it work.

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d b=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swap a=%d b=%d",a,b);
	return 0;
}

