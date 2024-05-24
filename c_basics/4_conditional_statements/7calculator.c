#include<stdio.h>
int main(){
int a,b;
char c;
printf("enter two numbers and operator:");
scanf("%d %c %d",&a,&c,&b);
if(c=='+')
	printf("%d %c %d=%d",a,c,b,a+b);
else if(c=='-')
	printf("%d %c %d=%d",a,c,b,a-b);
else if(c=='*')
	printf("%d %c %d=%d",a,c,b,a*b);
else
	printf("%d %c %d=%d",a,c,b,a/b);


return 0;
}



