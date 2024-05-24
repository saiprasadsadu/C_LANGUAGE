//Write a function that takes two numbers a and b as input arguments and returns their product as return value , without using * operator.
#include<stdio.h>
int multiplication(int x,int y)
{
	int multiple=0,i;
	for(i=1;i<=y;i++)
	{
		multiple+=x;
	}
	return multiple;
}
int main()
{
int a,b,product=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
if(a<0&&b<0)
{
	a=-a;
	b=-b;
	product=multiplication(a,b);
	printf("product is:%d",product);
}
else if(b<0)
{
	b=-b;
	product=multiplication(a,b);
	printf("%d",-1*product);
}
else
{
	product=multiplication(a,b);
	printf("product of %d and %d is:%d",a,b,product);
}
return 0;
}
