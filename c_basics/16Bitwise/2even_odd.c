//WAP whether a number is ODD or EVEN using bitwise
#include<stdio.h>
#define CHECK_BIT(x) x&0x01
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(CHECK_BIT(a))
		printf("GIVEN NUMBER IS:odd");
	else
		printf("GIVEN NUMBER IS :even");
}
