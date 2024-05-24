#include<stdio.h>
int x;//default extern only
int main()
{
	int fun();
	printf("%d  %p\n",x,&x);
	fun();
	fun();
	printf("%d %p\n",x,&x);
}
int fun()
{
x++;//gobal value of x is chaning here
}

