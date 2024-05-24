// Read 3 numbers and print which of them is the biggest.

#include<stdio.h>
int main()
{
int a,b,c;
printf("enetr 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
	printf("a is big:%d",a);
else if(b>c)
	printf("b is big:%d",b);
else
	printf("c is big:%d",c);
return 0;
}

