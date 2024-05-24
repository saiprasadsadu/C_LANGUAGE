#include"my.h"
#include<stdio.h>
int a,b;
int rem()
{
	if(b==0)
	{
		printf("zero division error ");
		return 0;
	}
	else
		return a%b;
}
