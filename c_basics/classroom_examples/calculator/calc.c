#include<stdio.h>
#include"myowm.h"
int main()
{
	int a,b;
	char c;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	getchar();
	printf("enter a character:");
	scanf("%c",&c);
	switch(c)
	{
	case '+':printf("%d",add(a,b));
		break;
	case '-':printf("%d",sub(a,b));
		break;
	case '*':
		printf("%d",mul(a,b));
		break;
	case '/':b!=0;
		printf("%d",div(a,b));
		break;
	case '%':b!=0;
		printf("%d",rem(a,b));
	}
	return 0;
}
