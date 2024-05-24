//WAP multiply a number by 9 using bit shift.
#include<stdio.h>
int main()
{
	int a,result;
	printf("enter a value to multiply:");
	scanf("%d",&a);
	result=(a<<3)+a;
	printf("%d\n",a);
	printf("After %d multiply %d:%d",temp,9,result);
}
