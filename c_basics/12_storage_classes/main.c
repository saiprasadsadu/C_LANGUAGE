//Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
#include<stdio.h>
#include"my.h"
int a;
int b;
int main()
{
	char ch;
	printf("enter two numbers:");
	scanf("%d%d",a,b);
	getchar();
	printf("enter a character:");
	scanf("%d",ch);
	switch(ch)
	{
	case '+':printf("sum is:%d",add());
	case '-':printf("sub is:%d",sub());
	case '*':printf("mul is:%d",mul());
	case '/':printf("div is:%d",div());
	case '%':printf("div is:%d",rem());
	}
}
