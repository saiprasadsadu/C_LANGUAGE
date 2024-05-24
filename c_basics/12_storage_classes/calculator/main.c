//Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
#include<stdio.h>
#include"my.h"
int a,b;
int main()
{
	char ch;
	do
	{
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	getchar();
	printf("enter a character:");
	scanf("%c",&ch);
	switch(ch)
	{
	case '+':printf("sum is:%d\n",add());break;
	case '-':printf("sub is:%d\n",sub());break;
	case '*':printf("mul is:%d\n",mul());break;
	case '/':printf("div is:%d\n",div());break;
	case '%':printf("rem is:%d\n",rem());break;
	}
	}while(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%');

}

