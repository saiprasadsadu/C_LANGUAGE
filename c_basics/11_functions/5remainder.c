//Write a function that takes two numbers a and b, and returns the remainder after dividing a with b.
#include<stdio.h>
int rem(int x,int y)
{
	int remain=0;
	remain=x%y;
	return remain;
}
int main()
{
int a,b,remainder=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
if(b==0)
	printf("zero division error");
else
{
	remainder=rem(a,b);
	printf("%d",remainder);
}
return 0;
}	

