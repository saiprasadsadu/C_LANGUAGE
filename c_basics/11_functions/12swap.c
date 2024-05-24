//Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.
#include<stdio.h>
void swaping(int x,int y)
{
	printf("before swap x=%d and y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swap x=%d and y=%d",x,y);
}
	
int main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	swaping(a,b);
return 0;
}
