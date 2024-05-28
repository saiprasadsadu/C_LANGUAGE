//2) create a string dynamically, read and print its value.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void  *str;
	str=(char *)malloc(20*sizeof(char));
	if(str==NULL)
	{
		printf("memory not allocated");
		return 0;//exit(0);
	}
	printf("read a string\n");
	scanf("%s",str);
	printf("print the string\n");
	printf("%s",str);
	free(str);
	return 0;
}
