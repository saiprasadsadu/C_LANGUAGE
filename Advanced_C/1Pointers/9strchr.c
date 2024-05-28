
#include<stdio.h>
char *mystrchr(char str[],char);
int main()
{
	char str[100];
	char ch1;
	int i=0;
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	getchar();
	printf("enter character to search:");
	scanf("%c",&ch1);
	getchar();
	char *index=mystrchr(str,ch1);
	if(index==NULL)
		printf("not found");
	else
		printf("%ld",index-str);
}
char *mystrchr(char str[],char ch)
{
	int i=0,index;
	while(*(str+i)!=0)
	{
		if(*(str+i)==ch)
		{
			index=i;
			return (str+index);
		}
		i++;
	}
	return NULL;
}

