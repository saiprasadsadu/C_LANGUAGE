//4) int  strcmp (char s1[], char s2[]);
int strcmp(char s1[],char s2[]);
#include<stdio.h>
int main()
{
	int ret;
	char s1[100],s2[100];
	printf("enter first string:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter second string:");
	scanf("%[^\n]s",s2);
	ret=strcmp(s1,s2);
	if(ret==0)
		printf("both are equal");
	else if(ret >0)
		printf("s1 is greater than s2");
	else
		printf("s1 is smaller than s2");

}

int strcmp(char s1[],char s2[])
{
	int i;
	for(i=0;*(s1+i)!='\0' || *(s2+i)!='\0';i++)
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
