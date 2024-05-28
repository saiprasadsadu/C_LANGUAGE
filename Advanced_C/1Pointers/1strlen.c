//1) int strlen(char s[]);

#include<stdio.h>

int strlen(char s[]);

int main()
{
	int len;
	char str[100];
	scanf("%[^\n]s",str);
	len=strlen(str);
	printf("length is %d",len);
	return 0;
}


int strlen(char s[])
{
	int i,k=0;
	for(i=0;*s!='\0';s++)
	k++;
        return k;
}
