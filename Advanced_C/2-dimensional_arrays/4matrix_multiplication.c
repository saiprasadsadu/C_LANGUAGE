//Write a program  for matrix multiplication.
#include<stdio.h>
void multiplication(int r1,int c1,int r2,int c2,int arr1[r1][c1],int arr2[r2][c2]);
int main()
{
	int i,j,r1,c1,r2,c2;//r means salesman , c means items
	printf("enter row size and column size:");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	int arr1[r1][c1],arr2[r2][c2];
	if(c1==r2)
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
		multiplication(r1,c1,r2,c2,arr1,arr2);
	}
	else
		printf(" colum1 size not equal to row2 size so multiplication not possible"); 
}


void multiplication(int r1,int c1,int r2,int c2,int arr1[r1][c1],int arr2[r2][c2])
{
	int i,j,k,l,mul_mat[r1][c2];
	for(i=0;i<r1;i++)
	{
		if(i==0)
			printf("printing matrix after multiplication\n");	
		for(j=0;j<c2;j++)
		{
			mul_mat[i][j]=0;
			for(k=0;k<c1;k++)
			{
				mul_mat[i][j]+=arr1[i][k]*arr2[k][j];
			}
			printf("%d  ",mul_mat[i][j]);
		}
		printf("\n");	
	}
	/*printf("printing matrix after multiplication\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d  ",mul_mat[i][j]);
		}
		printf("\n");
	}*/
}
