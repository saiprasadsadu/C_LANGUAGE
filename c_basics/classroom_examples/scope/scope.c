#include<stdio.h>
int x=20;
int fun();
int fun2();
int main()
{
x=10;
printf("%d\n",x);
int x=4;
printf("%d\n",x);
fun();
fun2();
	{
	int x;
	printf("%d\n",x);
	} 
printf("%d\n",x);
}
int fun()
{
	printf("%d\n",x);
	x=35;
}
