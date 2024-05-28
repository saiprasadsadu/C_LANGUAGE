//Write a program  for matrix addition and subtraction.
#include<stdio.h>
void addition(int r1,int c1,int arr1[][c1],int arr2[][c1]);
void subraction(int r1,int c1,int arr1[][c1],int arr2[][c1]);
int main()
{
	int i,j,r1,c1,r2,c2;//r means salesman , c means items
	printf("enter row size and column size:");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	int arr1[r1][c1],arr2[r2][c2];
	if(r1==r2 && c1==c2)
	{
	printf("1st matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("2nd matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	addition(r1,c1,arr1,arr2);
	subraction(r1,c1,arr1,arr2);
	}
	else
		printf("the rowsize and columsize of matrices are different so addition is not possible");
}
void addition(int r1,int c1,int arr1[][c1],int arr2[][c1])
{
	int add_mat[r1][c1],i,j;
	printf("after addition matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		add_mat[i][j]=arr1[i][j]+arr2[i][j];
		printf("%d  ",add_mat[i][j]);	
		}
		printf("\n");
	}
}
void subraction(int r1,int c1,int arr1[][c1],int arr2[][c1])
{
	int sub_mat[r1][c1],i,j;
	printf("after subraction matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		sub_mat[i][j]=arr1[i][j]-arr2[i][j];
		printf("%d  ",sub_mat[i][j]);	
		}
		printf("\n");
	}
}
