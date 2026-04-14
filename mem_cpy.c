

#include<stdio.h>
#include<stdlib.h>

void mem_cpy(char *des,char *src,int n)
{
	for(int i=0;i<n;i++)
		*(des+i)=*(src+i); /* *des++ = *src++ */
}
int main()
{
	char *des,*src;int size;
	printf("enter number of bytes to copy form source:");
	scanf("%d",&size);
	src = malloc(15*(sizeof(int)));
	des = malloc(15*(sizeof(int)));
	printf("read sourc string:");
	scanf("%s",src);
	mem_cpy(des,src,size);
	printf("destination sting:%s",des);
	free(src);
	free(des);
	return 0;

}
