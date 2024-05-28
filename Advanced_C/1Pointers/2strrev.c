// 2)  char * strrev( char s[]); // returns string base address
int strlen(char []);
char * strrev(char []);
#include<stdio.h>
int len;
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	len=strlen(str);
	char *base= strrev(str);
	printf("%s",base);
	return 0;
}


int strlen(char s[])
{
	int i;
	for(i=0;*(s+i)!='\0';i++);
	return i;
}


char * strrev(char s[])
{
	int i;
	char temp,*ptr=s;//*ptr =s giving base address of string to pointer variable
	for(i=0;i<len/2;i++)
	{
		temp=*(s+i);
		*(s+i)=*(s+len-i-1);
		*(s+len-i-1)=temp;
	}
	return ptr;
}
