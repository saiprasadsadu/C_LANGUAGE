#include<stdio.h>
void mystrncpy(char des[],char src[],int n);
int main()
{
	char src[100];
	char des[100];
	int n;
	printf("enter source string:");
	scanf("%99[^\n]s",src);
        getchar();	
	printf("enter destination string:");
	scanf("%99[^\n]s",des);
	printf("enter n value:");
	scanf("%d",&n);
	mystrncpy(des,src,n);
return 0;
}
void mystrncpy(char des[],char src[],int n)
{
	int i;
	for(i=0;i<n;i++)
		des[i]=src[i];
	des[i]='\0';
	printf("the string after copy is:%s",des);
}
	

