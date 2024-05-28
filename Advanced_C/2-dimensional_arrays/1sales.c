/*Declare a two-dimensional array of elements for sales details of a store, for each item, for each salesman. Take the sales values as input and print the array in matrix form.
Find out and print the following :
1 ) Total sales by each sales man
2 ) Total sales for a item
3 ) Total sales*/

#include<stdio.h>
int main()
{
	int i,j,r,c,salesman_sales=0,par_item_sales=0,sales=0;//r means salesman , c means items
	printf("enter row size and column size:");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//printing matrix
	printf("printing the actual matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	// total sales for each sales man
	printf("total sales for sales man\n");
	for(i=0;i<r;i++)
	{
		printf("for salesman[%d] total sales:",i);
		for(j=0;j<c;j++)
		{
			salesman_sales+=arr[i][j];	
		}
		printf("%d",salesman_sales);
		salesman_sales=0;
		printf("\n");
	}
//total sales for a particular item 
	printf("total sales for particular item:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			par_item_sales+=arr[j][i];	
		}
		printf("%d",par_item_sales);
		par_item_sales=0;
		printf("\n");
	}
	//total sales
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sales+=arr[i][j];	
		}

	}
	printf("total sales :%d",sales);
		
}
	
