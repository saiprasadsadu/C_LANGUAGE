/*Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change*/
#include<stdio.h>
#include<stdlid.h>
int main()
{
	int *p1=NULL,*p2=NULL,*p3=NULL,a;
	p1=&a,p2=&a,p3=&a;
	scanf("%d",&a);
	printf("p1 %d\n",*p1);
	printf("p2 %d\n",*p2);
	printf("p3 %d\n",*p3);
	a=10;	
	printf("p1 %d\n",*p1);
	printf("p1 %d\n",*p2);
	printf("p1 %d\n",*p3);
	*p1=7;
	printf("%d %d %d",*p1,*p2,*p3);
	*p2-=3;//*p2=7-3
	printf("%d %d %d",*p1,*p2,*p3);
	*p3=25;
	printf("%d %d %d",*p1,*p2,*p3);
}
	
	
