//Write a function that takes two numbers a and b, and returns the quotient after dividing a with b.
#include<stdio.h>
int qut(int x,int y)
{
	int quot=0;
	quot=x/y;
	return quot;
}
int main()
{
int a,b,quotient=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
if(b==0)
	printf("zero division error");
else
{
	quotient=qut(a,b);
	printf("%d",quotient);
}
return 0;
}	
