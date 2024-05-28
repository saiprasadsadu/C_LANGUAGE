//1) create an integer dynamically ,read and print its value.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void *ptr;
	ptr=(int *)malloc(1*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated");
		exit(0);
	}
	printf("read an integer\n");
	scanf("%d",(int *)ptr);
	printf("print the integer\n");
	printf("%d",*(int *)ptr);
	free(ptr);
	return 0;
}
