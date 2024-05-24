//Write a program to multiply two numbers without using * operator
#include<stdio.h>
int main()
{
int mul=0,n1,n2,i=1;
printf("enter a number:");
scanf("%d",&n1);
printf("enter a number:");
scanf("%d",&n2);
while(i<=n2)
{
	mul+=n1;
	i+=1;
}
printf("the multiplication of %d and %d is:%d",n1,n2,mul);
return 0;
}
