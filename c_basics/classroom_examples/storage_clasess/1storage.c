#include<stdio.h>
//int x;//default extern only
//extern int x;
int main()
{
	extern int x;
	int fun();
	int fun1();
	printf("%d  %p\n",x,&x);
	fun();
	fun();
	fun1();
	printf("%d  %p\n",x,&x);
}
int x;
int fun()
{
x++;//gobal value of x is chaning here
printf("%d  %p\n",x,&x);
}

