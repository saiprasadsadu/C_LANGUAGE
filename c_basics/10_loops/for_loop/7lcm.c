//Find the LCM of 2 given numbers
#include<stdio.h>

int main()
{
int a,b,x,y;
printf("enter two numbers:");
scanf("%d%d",&x,&y);
a=x;
b=y;
for( ;a!=b;)
{
	if(a<b)
		a=a+x;
	else
		b=b+y;	
}
printf("LCM of %d and %d is:%d",x,y,a);
}		

		
