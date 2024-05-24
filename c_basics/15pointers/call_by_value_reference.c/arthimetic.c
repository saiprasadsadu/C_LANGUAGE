/*Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function*/
#include<stdio.h>
void arithmetic_operator(int,int,int*,int*,int*,int*,int*);
int main()
{
	int a,b,sum,sub,mul,div,rem;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	arithmetic_operator(a,b,&sum,&sub,&mul,&div,&rem);
	printf("sum is %d\n",sum);
	printf("sub is %d\n",sub);
	printf("mul is %d\n",mul);
	printf("div is %d\n",div);
	printf("rem is %d\n",rem);
	
}
void arithmetic_operator(int a,int b,int *sum,int *sub,int *mul,int *div,int *rem)
{
	*sum=a+b;
	*sub=a-b;
	*mul=a*b;
	*div=a/b;
	*rem=a%b;
}
