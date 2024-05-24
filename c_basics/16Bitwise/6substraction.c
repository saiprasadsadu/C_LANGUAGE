//WAP implements subtraction functionality without using SUB('-') Operator.    
#include<stdio.h>
int main()
{
	int a,sub,result;
	printf("enter a value and substraction value:");
	scanf("%d%d",&a,&sub);
	result=a+(~sub+1);
	printf("substraction is:%d",result);
}
