//11) Write a function to replace a given substring by another string of same length in a given string, return the destination string base address.
char * strreplacestr(char * str[], char *sub1[] , char *sub2[]);
#include<stdio.h>
char  *mystrreplace(char str[],char s1[],char s2[] );
int main()
{
	int i,len1,len2;
	char str[100], s1[100], s2[100];
	char ch1,*base;
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	getchar();
	printf("enter string to replace:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter replacing string:");
	scanf("%[^\n]s",s2);
	for(i=0;s1[i];i++);
	len1=i;
	for(i=0;s2[i];i++);
	len2=i;
	if(len1<=len2)
	{
		base=mystrreplace(str,s1,s2);	
		if(base==NULL)
			printf("string not found");
		else
			printf("%s",base);
	}
	else
		printf("enter valid string");
	return 0;
}
char  *mystrreplace(char str[],char s1[],char s2[])
{
	int i=0,j=0,k,l,len=0;
	for(i=0;*(s1+i)!=0;i++);
	len=i;
	for(i=0;*(str+i)!=0;i++)
	{
		k=i;
		for(j=0;*(s1+j);j++)
		{
			if(*(str+k)==*(s1+j))
				k++;
			else
				break;
		}
		if(j==len)
		{
			for(l=0;l<len;l++)
			{
				*(str+i+l)=*(s2+l);
			}
			return str;
		}
	}
	return NULL;

}
