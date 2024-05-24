#include<stdio.h>
int fun1()
{
	static int x;
	printf("%d  %p\n",x,&x);
}

