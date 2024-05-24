#include<stdio.h>
int mystrcmp(char s1[],char s2[]);
int main()
{
	int value;
	char s1[100];
	char s2[100];
	printf("enter string1:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter string2:");
	scanf("%[^\n]s",s2);
	value=mystrcmp(s1,s2);
	if(value<0)
		printf("s1 is samller than s2");
	else if(value>0)
		printf("s1 is bigger than s2");
	else
		printf("both s1 and s2 are equal");
}
int mystrcmp(char s1[],char s2[])
{
	int i=0;
	for(i=0;s1[i]!=0||s2[i]!=0;i++)
	{
		if(s1[i]-s2[i]==0)
			continue;
		else
			return s1[i]-s2[i];
	}
}
