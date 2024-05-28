//Search for an element in a two dimensional array, and print its position - as row and column numbers. write a search function that will receive the array and return row and column indexes as output.
#include<stdio.h>
int search(int r,int c,int arr[][c],int *a,int *b,int search_element);
int main()
{
	int i,j,r,c,index_r1=0,index_c1=0,search_element,ret;//r means salesman , c means items
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
	printf("enter search element:");
	scanf("%d",&search_element);
	ret=search(r,c,arr,&index_r1,&index_c1,search_element);
	if(ret==0)
	{
		printf("element found at arr[%d][%d]",index_r1,index_c1);
	}
	else
		printf("element not found");
}


int search(int r,int c,int arr[][c],int *a,int *b,int search_element)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(search_element==arr[i][j])
			{
				*a=i,*b=j;
				//printf("%d %d\n",*a,*b);
				return 0;
			}
		}
	}
	return 1;
}
	
	



