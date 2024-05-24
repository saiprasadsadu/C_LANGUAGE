#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two numbers for range:");
scanf("%d%d",&a,&b);
temp=a;
for(a;a<=b;a++)
{
	if(a%2==0)
		printf("%d  ",a);
}
printf("\n");
for(temp;temp<=b;temp++)
{
	if(temp%2!=0)
		printf("%d  ",temp);
}
return 0;
}

