//Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
#include<stdio.h>
int main()
{
	//int c,d;
	char a,b,*pt1=&a,*pt2=&b;
	printf("enter a character:");
	scanf("%c",pt1);
	getchar();
	printf("enter a character:");
	scanf("%c",pt2);
	//c=printf("%d\n",*pt1);
	//d=printf("%d\n",*pt2);
	if(*pt1>*pt2)
		printf("character %c has higher ascii value",*pt1);
	else if(*pt1<*pt2)
		printf("character %c has higher ascii value",*pt2);
	else
		printf("both characters are same");
}
	
	
