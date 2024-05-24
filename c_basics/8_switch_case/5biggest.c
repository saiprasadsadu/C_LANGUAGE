//C program to find biggest of two numbers using switch statement
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 2 numbers:");
scanf("%d%d",&a,&b);
c=a>b;
switch(c)
{
case 1:printf("a is big");
break;
default:printf("b is big");
break;
}
return 0;
}

