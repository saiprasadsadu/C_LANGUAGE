#include<stdio.h>
int main()
{
int a,b,quotient=0,remainder=0,sub;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
for( ;a>=b;)
{	
		sub=a-b;
		quotient+=1;
		a=sub;
		//remainder=a;
}
remainder=a;
printf("%d\n",quotient);
printf("%d\n",remainder);
}

