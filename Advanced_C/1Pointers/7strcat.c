//char *strcat(char d[],char s[]);//return destination address
#include<stdio.h>
char * strcat(char des[],char src[]);
int main()
{
	char src[100];
	char des[100];
	printf("enter source string:");
	scanf("%99[^\n]s",src);
	getchar();
	printf("enter destination string:");
	scanf("%99[^\n]s",des);
	char * base=strcat(des,src);
	printf("%s",base);
}
char * strcat(char des[],char src[])
{
	int j=0,i=0;
	while(*(des+i)!=0)
	{
		i++;
	}
	while(*(src+j)!='\0')
	{
		*(des+i+j)=*(src+j);
		j++;
	}
	*(des+i+j)='\0';
	return des;
}

