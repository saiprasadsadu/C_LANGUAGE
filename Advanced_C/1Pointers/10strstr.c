//10) char * strstr(char str[], char sub[]); //returns the address of the character in the main string from where the substring is matching.
#include<stdio.h>
char *mystrstr(char str[],char sub_str[]);
int main()
{
	char str[100],sub_str[100],*base;
	printf("enter a string:");
	scanf("%[^\n]s",str);
	getchar();
	printf("enter a substring:");
	scanf("%[^\n]s",sub_str);
	base=mystrstr(str,sub_str);
	if(base==0)
		printf("sub string not found");
	else
		printf("%ld",base-str);
}
char  *mystrstr(char str[],char sub_str[])
{
	int len=0,i,k,j;
	for(i=0;*(sub_str+i)!=0;i++);
		len=i;
	for(i=0;*(str+i)!=0;i++)
	{
		k=i;
		for(j=0;*(sub_str+j)!=0;j++)
		{
			if(*(str+k)==*(sub_str+j))
				k++;
			else
				break;
		}
		if(j==len)
			return (str+i);
	}
	return NULL;
}
