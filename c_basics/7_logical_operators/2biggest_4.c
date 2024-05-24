Read 4 numbers and print which of them is biggest.
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enetr 3 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
	printf("a is big:%d",a);
else if(b>c&&b>d)
	printf("b is big:%d",b);
else if(c>d)
	printf("c is big:%d",c);
else
	printf("d is big:%d",d);
return 0;
}

