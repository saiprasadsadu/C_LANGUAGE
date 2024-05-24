

#include<stdio.h>
int main()
{
	int a,b,xor;
	printf("enter the integer values");
	scanf("%d%d",&a,&b);
	xor=(a|b)-(a&b);
	printf("xor result:%d\n",xor);
	return 0;
}

