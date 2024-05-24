/*Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).*/
#include<stdio.h>
int main()
{
	int a=5,*p1=&a;
	char b='a',*p2=&b;
	float c=12.4,*p3=&c;
	double d=1532.54,*p4=&d;
	printf("int address is:%p\t,value is:%d\t,size is:%ld\n",&a,a,sizeof(a));
	printf("char address is:%p\t,value is:%c\t,size is:%ld\n",&b,b,sizeof(b));
	printf("float address is:%p\t,value is:%.1f\t,size is:%ld\n",&c,c,sizeof(c));
	printf("double address is:%p\t,value is:%lf\t,size is:%ld\n",&d,d,sizeof(d));
	printf("size of pointer is%ld\t,pointer value:%d\n",sizeof(p1),*p1);
	printf("size of pointer is%ld\t,pointer value:%c\n",sizeof(p2),*p2);
	printf("size of pointer is%ld\t,pointer value:%.1f\n",sizeof(p3),*p3);
	printf("size of pointer is%ld\t,pointer value:%lf\n",sizeof(p4),*p4);
	printf("int pointer address:%p\n",p1);	
	printf("char pointer address:%p\n",p2);	
	printf("float pointer address:%p\n",p3);	
	printf("double pointer address:%p\n",p4);	
}
