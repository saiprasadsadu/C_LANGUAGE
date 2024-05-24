#include<stdio.h>
int mystrncmp(char s1[],char s2[],int);
int main()
{
	int value,n;
	char s1[100];
	char s2[100];
	printf("enter string1:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter string2:");
	scanf("%[^\n]s",s2);
	printf("enter n value:");
	scanf("%d",&n);
	value=mystrncmp(s1,s2,n);
	if(value<0)
		printf("s1 is samller than s2");
	else if(value>0)
		printf("s1 is bigger than s2");
	else
		printf("both s1 and s2 are equal");
}
int mystrncmp(char s1[],char s2[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(s1[i]-s2[i]==0)
			continue;
		else
			return s1[i]-s2[i];
	}
	if(i==n)
		return 0;
}

