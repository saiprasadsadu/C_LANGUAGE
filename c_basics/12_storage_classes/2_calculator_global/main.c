//Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in the operations file and be used to print in main.
#include<stdio.h>
#include"my.h"
int a,b,c;
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
	case '+':add();
		printf("sum is:%d\n",c);break;
	case '-':sub();
		printf("sub is:%d\n",c);break;
	case '*':mul();
		printf("mul is:%d\n",c);break;
	case '/':div();
		printf("div is:%d\n",c);break;
	case '%':rem();
		printf("rem is:%d\n",c);break;
	}
	}while(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%');

}

