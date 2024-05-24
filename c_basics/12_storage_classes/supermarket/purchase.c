#include"my.h"
#include<stdio.h>
extern int stock;
int item;
int purchase()
{

	printf("enter the purchase items:\n");
	scanf("%d",&item);
	if(item<=0)
		printf("enter valid number of item\n");
	else if(item+stock<=1000)
	{
		add_stock(item);
	}
	else
	{
		printf("no space available");
	}
}

