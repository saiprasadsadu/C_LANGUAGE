//Write a program to swap two numbers using Call by Value and Call by Reference.
#include<stdio.h>
void swapcbv(int,int);
void swapcbr(int*,int*);
int main()
{
	int a,b;
	printf("enter a and b value:");
	scanf("%d%d",&a,&b);
	printf("main before call_by_value and reference a=%d,b=%d\n",a,b);
	swapcbv(a,b);
	printf("main after call by value swap:a=%d,b=%d\n",a,b);
	printf("main after call by value swap address :a=%p,b=%p\n",&a,&b);
	swapcbr(&a,&b);
	printf("main after call by reference swap:a=%d,b=%d\n",a,b);
	printf("main after call by reference address:a=%p,b=%p\n",&a,&b);
}
void swapcbv(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("fun after swap cbv: address a=%p b=%p,a=%d,b=%d\n",&a,&b,a,b);
}
void swapcbr(int *y,int *z)
{
	int temp=*y;
	*y=*z;
	*z=temp;
	printf("fun after swap cbr:address y=%p z=%p,value:y=%d,z=%d\n",y,z,*y,*z);
}
