/*6) sorting a list of names received from the keyboard, with options using callback functions.
1 :  sort with case sensitivity (strcmp)
2 : sort without case sensitivity (stricmp)*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void sort_names(int (* fp)(const char *,const char *) ,int num,int num1,char names[][num1]);
int main()


{
	int row,col,i,j,ch;
	printf("Enter no of names :");
	scanf("%d",&row);
	printf("Enter max_name length :");
	scanf("%d",&col);
	printf("1.sort with case_sensitivity\n");
	printf("2.sort without case_sensitivity\n");
	printf("enter a choice:");
	scanf("%d",&ch);
	char names[row][col];// **name=malloc(3*szeof(char)) for row and for column name[col]=malloc(10*sizeof(char));
	getchar();
	for(i=0;i<row;i++)
	{
		printf("Enter name %d:",i+1);
		scanf(" %[^\n]",names[i]);
	}
	


	int (*fparr[])(const char * ,const char *)={strcmp,strcasecmp};//array to function pointers
	if(ch==1)
	{
		sort_names(fparr[0],row,col,names);
	}
	else if(ch==2)
	{
		sort_names(fparr[1],row,col,names);
	
	}
	else
		printf("enter correct choice:");

	//printing the sorted array
		for(i=0;i<row;i++)
		{
			printf("%s \n",names[i]);
		}
}


//function for sorting with casesensitivity
void sort_names(int (*fp)(const char *,const char *),int num,int num1,char names[][num1]) 
{
	int i, j,k;
	char temp;
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(((*fp)(names[i],names[j]))>0)
			{
				for(k=0;k<num1;k++)
				{
					temp=names[i][k];
					names[i][k]=names[j][k];
					names[j][k]=temp;
				}
			}
		}
	}				

}    

