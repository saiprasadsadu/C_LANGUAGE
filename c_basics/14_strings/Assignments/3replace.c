/*Write a program to replace a given character by another character in a string.
" WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine"
*/
#include<stdio.h>
int main()
{
	int i=0;
	char str[100];
	printf("enter a character:");
	scanf("%99[^\n]",str);
	while(str[i]!=0)
	{
		switch(str[i])
		{
			case '0':printf("zero ");break;
			case '1':printf("one ");break;
			case '2':printf("two ");break;
			case '3':printf("three ");break;
			case '4':printf("four ");break;
			case '5':printf("five ");break;
			case '6':printf("six ");break;
			case '7':printf("seven ");break;
			case '8':printf("eight ");break;
			case '9':printf("nine ");break;
		}
		i++;
	}
}	
