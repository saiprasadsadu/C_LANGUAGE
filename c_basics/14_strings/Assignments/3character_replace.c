//Write a program to replace a given character by another character in a string.
#include<stdio.h>
int main()
{
	char str[100];
	char ch1,ch2;
	int i=0;
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	getchar();
	printf("enter which charcter to replace:");
	scanf("%c",&ch1);
	getchar();
	printf("enter replace character:");
	scanf("%c",&ch2);
	while(str[i]!=0)
	{
		if(str[i]==ch1)
			str[i]=ch2;
		else
			str[i]=str[i];
	i++;
	}
	printf("%s",str);
}
	
