#include"my.h"
#include<stdio.h>
extern int stock;
int item;
int sell()
{
		printf("enter number of items to sold:\n");
		scanf("%d",&item);
		if(item<=0)
			printf("enter valid number of items:");
		else if(stock<item)
		{
			printf("stock is not availabe");
		}
		else
		{
			delete_stock(item);
		}
}
