#include<stdio.h>
void mystrreplace(char str[],char s1[],char s2[] );
int main()
{
	int i,len1,len2;
	char str[100], s1[100], s2[100];
	char ch1;
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
		mystrreplace(str,s1,s2);
	}
	else
		printf("enter valid string");
	return 0;
}
void mystrreplace(char str[],char s1[],char s2[])
{
	int i=0,j=0,k,l,len=0;
	for(i=0;s1[i]!=0;i++);
	len=i;
	for(i=0;str[i]!=0;i++)
	{
		k=i;
		for(j=0;s1[j];j++)
		{
			if(str[k]==s1[j])
				k++;
			else
				break;
		}
		if(j==len)
		{
			for(l=0;l<len;l++)
			{
				str[i+l]=s2[l];
			}
		}
	}
	printf("%s",str);

}
