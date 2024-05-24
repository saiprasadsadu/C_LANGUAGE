#include<stdio.h>
void mystrncat(char des[],char src[],int);
int main()
{
	int n;
	char src[100];
	char des[100];
	printf("enter source string:");
	scanf("%99[^\n]s",src);
	getchar();
	printf("enter destination string:");
	scanf("%99[^\n]s",des);
	printf("enter n value:");
	scanf("%d",&n);
	mystrncat(des,src,n);
}
void mystrncat(char des[],char src[],int n)
{
	int j=0,i=0;
	while(des[i]!=0)
	{
		i++;
	}
	while(j<n)
	{
		des[i+j]=src[j];
		j++;
	}
	des[i+j]='\0';
	printf("%s",des);
}

