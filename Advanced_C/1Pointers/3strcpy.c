//char * strcpy( char d[] , char s[]);  // returns destination base address
char * strcpy(char d[],char s[]);
#include<stdio.h>
int main()
{
	char s[100],d[100];
	printf("enter a source string:");
	scanf("%[^\n]s",s);
	getchar();
	printf("enter a destination string:");
	scanf("%[^\n]s",d);
	char *r=strcpy(d,s);
	printf("the destination string is:%s\n",r);
}

char * strcpy(char des[],char scr[])
{
	char *ptr=des;
	int i;
	for(i=0;*(scr+i)!='\0';i++)
		*(des+i)=*(scr+i);
	*(des+i)='\0';
	return ptr;
} 
