/*void mystrcat( char d[] , char s[]);

concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";
output: after concatenation d[] becomes " KernelMasters";*/
#include<stdio.h>
void mystrcat(char des[],char src[],int);
int main()
{
	int i=0;
	char src[100];
	char des[100];
	printf("enter source string:");
	scanf("%99[^\n]s",src);
	getchar();
	printf("enter destination string:");
	scanf("%99[^\n]s",des);
	while(des[i]!=0)
	{
		i++;
	}
	mystrcat(des,src,i);
}
void mystrcat(char des[],char src[],int i)
{
	int j=0;
	while(src[j]!=0)
	{
		des[i+j]=src[j];
		j++;
	}
//	des[i+j]='\0';
	printf("%s",des);
}

