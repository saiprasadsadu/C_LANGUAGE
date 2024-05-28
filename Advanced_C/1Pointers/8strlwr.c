//char *strlwr(char s[]);
#include<stdio.h>
char * strlwr(char str[]);
int main()
{
	int i;
	char str[100];
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	char *base=strlwr(str);
	printf("%s",base);
}
char *strlwr(char str[])
{
	int i=0;
	while(*(str+i)!='\0')
	{
		if(*(str+i)>=65 && *(str+i)<=90)
		{
			*(str+i)=*(str+i)+32;
		}
		else
			*(str+i)=*(str+i);
	i++;
	}
	return str;
}
