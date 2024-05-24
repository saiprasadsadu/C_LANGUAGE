/*declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p1=NULL,*p2=NULL,*p3=NULL,*p4=NULL;
	printf("int pointer size:%ld\n",sizeof(p1));
	printf("int pointer size:%ld\n",sizeof(p2));
	printf("int pointer size:%ld\n",sizeof(p3));
	printf("double pointer size:%ld\n",sizeof(p4));
}



//data type tells about from where to where we can access memory locations,but pointer size is memory address size.
//for 32 bit and 64 bit system the memory address size is 8 bytes.	
