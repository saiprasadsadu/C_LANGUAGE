/*Modify the Calculator Program to take input and perform the chosen operation. If the user chooses one of the operations, +,-,*,/ and % then show the output and continue for next iteration.
If the user chooses wrong operation, then stop the loop.*/

#include<stdio.h>
int main()
{
int a,b,i=1;
char ch;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
for(;i<=1;)
{
	printf("enter a charcter:");
	getchar();
	scanf("%c",&ch);
	if(ch=='+')
		printf("%d + %d =%d\n",a,b,a+b);
	else if(ch=='-')
		printf("%d - %d =%d\n",a,b,a-b);
	else if(ch=='*')
		printf("%d * %d =%d\n",a,b,a*b);
	else if(ch=='/')
		printf("%d/%d =%d\n",a,b,a/b);
	else if(ch=='%')
		printf("%d rem %d=%d\n",a,b,a%b);
	else
		break;
}
return 0;
}

