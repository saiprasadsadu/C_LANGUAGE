//4) Write a swap function to swap the values of two character variables.

void swap(char *a,char *b);
#include<stdio.h>
int main()
{
	char a,b;
	printf("eneter the characters:");
	scanf("%c %c",&a,&b);
	swap(&a,&b);
}
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
	printf("after swap a : %c and b :%c",*a,*b);
}
