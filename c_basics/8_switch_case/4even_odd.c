//C program to check whether a number is odd or even using switch statement
#include<stdio.h>
int main()
{
int a,b;
printf("enter a number:");
scanf("%d",&a);
b=a%2;
switch(b)
{
case 0:printf("%d is even",a);
break;
default:printf("%d is odd",a);
}
return 0;
}

