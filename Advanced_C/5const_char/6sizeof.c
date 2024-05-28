//6) Define a sizeof macro that will find the size of a given variable as a parameter, using pointers.

#include<stdio.h>
#define size(type) (char *)(&type+1)-(char *)(&type)
int main()
{
	
	char ch;
	int n;
	float f;
	double d;
	printf("for character in bytes:%ld\n",size(ch));
	printf("for integer in bytes%ld\n",size(n));
	printf("for float in bytes%ld\n",size(f));
	printf("for double in bytes%ld\n",size(d));
	
}

	
