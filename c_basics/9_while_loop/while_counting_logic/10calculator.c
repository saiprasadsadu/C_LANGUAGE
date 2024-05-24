/*write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operation on numbers and print the output. Modify the program to repeat this task n number of times.*/
#include<stdio.h>
int main()
{
int a,b,i=1,n;
char ch;
printf("enter number for loop iteration:");
scanf("%d",&n);
printf("enter two numbers:");
scanf("%d%d",&a,&b);
while(i<=n)
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
		printf("in valid\n");
	i++;
}
return 0;
}
