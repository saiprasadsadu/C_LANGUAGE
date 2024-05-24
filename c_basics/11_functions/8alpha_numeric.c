/*) Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function. (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
Hint: int fun_alpha_num(char c).*/
#include<stdio.h>
int fun_alpha_num(char c)
{
	if(c>=97&&c<=122||c>=65&&c<=90||c>=48 &&c<=57)
		return 1;
	else 
		return 0;
}
int main()
{
	char ch;
	int charc;
	printf("enter a character:");
	scanf("%c",&ch);
	charc=fun_alpha_num(ch);
	if(charc==1)
		printf("%c is alpha_numeric",ch);
	else
		printf("%c is not alpha_numeric",ch);
return 0;
}

	
	
