#include<stdio.h>
//int x;//default extern only
int main()
{
	int x;
	int fun();
	printf("main:%d  %p\n",x,&x);
	fun();
	fun();
	printf("main:%d  %p\n",x,&x);
}
int x;
int fun()
{
x++;//gobal value of x is chaning here
printf("fun:%d  %p\n",x,&x);
}

