//WAP implements addition functionality without using ADD('+') Operator.
#include<stdio.h>
int main()
{
int num1,num2,sub;
printf("Enter two numbers :");
scanf("%d%d",&num1,&num2);
//int sum=num1^num2;
//int carry=(num1&num2)<<1;
printf("result :%d\n",num1-(~num2+1));
return 0;
}

