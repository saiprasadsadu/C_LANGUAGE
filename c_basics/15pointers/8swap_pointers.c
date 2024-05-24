/*Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 integers:");
	scanf("%d%d%d",&a,&b,&c);
	int *p1=&a,*p2=&b,*p3=&c;
	printf("before swap a=%d,b=%d,c=%d\n",*p1,*p2,*p3);
	*p1=*p1+*p2+*p3;
	*p3=*p1-*p2-*p3;
	*p2=*p1-*p2-*p3;
	*p1=*p1-*p2-*p3;
	printf("before swap a=%d,b=%d,c=%d\n",*p1,*p2,*p3);
}
