// 5) int strncmp(char s1[]. char s2[], int n);
int strncmp(char s1[],char s2[],int n);
#include<stdio.h>
int main()
{
	int ret,n;
	char s1[100],s2[100];
	printf("enter first string:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter second string:");
	scanf("%[^\n]s",s2);
	printf("enter compare length:");
	scanf("%d",&n);
	ret=strcmp(s1,s2,n);
	if(ret==0)
		printf("both are equal");
	else if(ret >0)
		printf("s1 is greater than s2");
	else
		printf("s1 is smaller than s2");

}

int strn

int strncmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(*(s1+i)==*(s2+i))
		{
			continue;
		}
		else 
			return *(s1+i)-*(s2+i);
	}
	return 0;
}

