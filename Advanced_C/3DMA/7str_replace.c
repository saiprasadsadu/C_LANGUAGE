/*7)Write a function that takes a main string and two sub strings (need not be same length), and replace every occurrence of first substring with the second substring in main string and return a new string as output.

eg., input : kernel  e   xxx

output: kxxxrnxxxl
*/

#include<stdio.h>
#include<stdlib.h>
char *str_replace(char *str,char *s1,char *s2);

int main()
{
	int n,m;
	char *str1,*str2,*str3,*ret;
	str1=malloc(20*sizeof(char));
	str2=malloc(20*sizeof(char));
	str3=malloc(20*sizeof(char));
	if(str1==NULL || str2==NULL|| str3==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	printf("enter first string\n");
	scanf("%[^\n]s",str1);
	getchar();
	printf("enter sub string1\n");
	scanf("%[^\n]s",str2);
	getchar();
	printf("enter sub string2\n");
	scanf("%[^\n]s",str3);
	ret=str_replace(str1,str2,str3);
	printf("%s",ret);
	free(ret);
	
}

char *str_replace(char *str,char *s1,char *s2)
{
	int i=0,j=0,k,l,len=0,len1=0,index=0;
	char *temp_str1=(char *)malloc(20*sizeof(char));
	for(i=0;s1[i]!=0;i++);
	len=i;
	for(i=0;s2[i]!=0;i++);
	len1=i;
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
			for(l=0;l<len1;l++)
			{
				temp_str1[index++]=s2[l];
			}
			i+=len-1;
		}
		else
			temp_str1[index++]=str[i];
	}
	temp_str1[index]='\0';
	return temp_str1;
}
