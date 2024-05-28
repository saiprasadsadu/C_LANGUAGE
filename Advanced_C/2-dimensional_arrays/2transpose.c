/*
Write the following program :
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8

its transpose should be :     1 4 7
                              3 5 8
*/

#include<stdio.h>
void transpose(int r,int c,int mat[][c]);
int main()
{
	int i,j,r,c;//r means salesman , c means items
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
	transpose(r,c,arr);
}
void transpose(int r,int c,int arr[][c])
{
	int i,j,mat[r][c];
	printf("after transpose:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			mat[i][j]=arr[j][i];
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
}
	
