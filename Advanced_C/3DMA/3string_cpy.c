//3) create a string dynamically, copy a string constant to it ( "Kernel"). Create another string dynamically. Copy the first string to second string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	void *str1,*str2;
	str1=(char *)malloc(20*sizeof(char));
	str2=(char *)malloc(20*sizeof(char));
	if(str1==NULL || str2==NULL)
	{
		printf("memory not allocated");
		exit(0);//return 0;
	}
	printf("read a string\n");
	scanf("%19[^\n]s",str1);
	printf("stirng copy\n");
	strcpy(str2,str1);
	printf("%s",str2);
	free(str1);
	free(str2);
	return 0;
	
}
