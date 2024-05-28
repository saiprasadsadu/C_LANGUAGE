//2)Rewrite the calculator program using an array of function pointers.
#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);

int main()
{
	int a,b,c,i;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	int (*fp[])(int, int)={add,sub,mul,div,mod};
	for(i=0;i<5;i++)
	{
		c=(fp[i])(a,b);
		printf("%d  \n",c);
	}



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
	
