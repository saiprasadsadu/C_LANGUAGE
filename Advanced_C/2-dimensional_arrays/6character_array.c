//Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in a loop.
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter no of names :");
	scanf("%d",&row);
	printf("Enter max_name length :");
	scanf("%d",&col);
	char name[row][col];
	getchar();
	for(i=0;i<row;i++)
	{
		printf("Enter name %d:",i+1);
		scanf(" %[^\n]",name[i]);
	}
	printf("printing names char by char\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<name[i][j]!='\0';j++)
		{
			printf("%c ",name[i][j]);
		}
	printf("\n");
	}
	return 0;
}


