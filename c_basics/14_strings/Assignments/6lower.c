/*"Write a program to convert a string into lower case and print.
eg., input : Hello
output : hello"
*/
#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter a string:");
	scanf("%99[^\n]",str);
	while(str[i]!=0)
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i]+32;
		else 
			str[i]=str[i];
		i++;
	}
	printf("%s",str);
}
