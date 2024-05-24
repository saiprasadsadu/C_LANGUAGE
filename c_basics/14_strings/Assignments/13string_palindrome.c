/*int mypalindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome
*/
#include<stdio.h>
int mypalindrome(char str[],int);
int main()
{
	int i=0,ret,j=0;
	char str[100];
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	while(str[i]!=0)
	{
		i++;
	}
	while(str[j]!=0)
	{
		if(str[j]>=65&&str[j]<=90)
			str[j]+=32;
		else
			str[j]=str[j];
		j++;
	}
	printf("%s",str);
	ret=mypalindrome(str,i);
	if(ret==1)
		printf("palindrome");
	else
		printf("not a palindrome");
}
int  mypalindrome(char str[],int n)
{
	int i=0,count=0;
	for(i=0;i<n/2;i++)
	{
		if(str[i]==str[n-i-1])
			count++;
	}
	if(count==n/2)
		return 1;
	else 
		return 0;
}

