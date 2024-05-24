/*
void mystrlwr( char str[]);
// convert all upper case alphabets to lower case in the given string
*/
#include<stdio.h>
void mystrlwr(char str[]);
int main()
{
	int i;
	char str[100];
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	mystrlwr(str);
}
void mystrlwr(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else
			str[i]=str[i];
	i++;
	}
	printf("%s",str);
}	
