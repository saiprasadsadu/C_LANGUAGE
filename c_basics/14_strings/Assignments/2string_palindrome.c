//Write a program that reads a string as input, and determines whether the string is a palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,count=0,n=0;
	char str[100];
	printf("enter a string:");
	//fgets(str,99,stdin); in this case when we press enter this also including newline(\n) also a character.
	scanf("%99[^\n]",str);
	while(str[i]!='\0')
	{
		
		n++;
		i++;
	}
	i=0;
	while(str[i]!=0)
	{
		if(str[i]>=65 &&str[i]<=90)
			str[i]+=32;
		else
			str[i]=str[i];
		i++;
	}
	for(i=0;i<n/2;i++)
	{
		if(str[i]==str[n-1-i])
			count++;
	}
	if(count==n/2)
		printf("palindrome");
	else
		printf("not a palindrome");
}
