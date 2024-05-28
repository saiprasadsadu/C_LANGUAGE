//1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	int (*fp)(int ,int );//like int add(int ,int);
	fp=add;//assiging address of a function
	//fp=&add; another way
	c=fp(a,b);// we can write as (*fp)(a,b);
	printf("sum %d\n",c);
	fp=sub;
	c=fp(a,b);
	printf("sub %d\n",c);
	fp=mul;
	c=fp(a,b);
	printf("mul %d\n",c);
	fp=div;
	c=fp(a,b);
	printf("div %d\n",c);
	fp=mod;
	c=fp(a,b);
	printf("mod %d\n",c);
	return 0;
}
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}
int mod(int a,int b)
{
return a%b;
}
