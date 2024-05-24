/*"Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = ""abc""; //size of name is 10 bytes
            // length of name is 3"*/
#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter a string:");
	scanf("%99[^\n]",str);
	while(str[i]!=0)
	{
		i++;
	}
	printf("the length is:%d",i);
}
	
