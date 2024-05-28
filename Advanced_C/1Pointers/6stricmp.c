int stricmp(char s1[],char s2[]);
#include<stdio.h>
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
int main()
{
	int ret,i;
	char s1[100],s2[100],t1[100],t2[100];
	printf("enter first string:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter second string:");
	scanf("%[^\n]s",s2);
	for(i=0;*(s1+i)!='\0';i++)
		*(t1+i)=*(s1+i);
	*(t1+i)='\0';
	
	for(i=0;*(s2+i)!='\0';i++)
		*(t2+i)=*(s2+i);
	*(t2+i)='\0';
	strlwr(t1);
	strlwr(t2);
	ret=strcmp(t1,t2);
	if(ret==0)
		printf("both are equal");
	else if(ret >0)
		printf("s1 is greater than s2");
	else
		printf("s1 is smaller than s2");

}

int stricmp(char s1[],char s2[])
{
	int i=0;
	for(i=0;*(s1+i)!='\0'||*(s2+i)!='\0';i++)
	{	

		if(s1-s2==0)
			continue;
		else
			return s1-s2;
	}
	return 0;
}



