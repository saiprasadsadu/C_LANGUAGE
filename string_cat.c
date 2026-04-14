#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strcat(char *des,char *src)
{
	int len,i;
	for( i=0;*(src+i);i++);  // str[i]!='\0'  or *(str+i) 0r *(str++)
	len=i;
	for(;*(des);len++)
		*(src+len)=*(des++); 
}
int main()
{
	char *des,*src;int size;
	//printf("enter number of bytes to copy form source:");
	//scanf("%d",&size);
	src = malloc(15*(sizeof(int)));
	des = malloc(15*(sizeof(int)));
	printf("read sourc string:");
	scanf("%s",src);
	printf("read destinaion string:");
	scanf("%s",des);
	my_strcat(des,src);
	printf("destination sting:%s",src);
	free(src);
	free(des);
	return 0;

}

