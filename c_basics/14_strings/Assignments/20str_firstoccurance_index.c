#include<stdio.h>
int mystrchr(char str[],char);
int main()
{
	int index;
	char str[100];
	char ch1;
	int i=0;
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	getchar();
	printf("enter character to search:");
	scanf("%c",&ch1);
	getchar();
	index=mystrchr(str,ch1);
	if(index<0)
		printf("the character not found");
	else
		printf("%d",index);
}
int mystrchr(char str[],char ch)
{
	int i=0,index;
	while(str[i]!=0)
	{
		if(str[i]==ch)
		{
			index=i;
			return index;
		}
		i++;
	}
	return -1;
}


