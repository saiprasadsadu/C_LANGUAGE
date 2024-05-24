//Read a number from user, and print its multiplication table upto 10 multiples.
#include<stdio.h>
int main()
{
int i=1,n,a=10;
printf("enter a number:");
scanf("%d",&n);
while(i<=a)
{
	printf("%d * %d = %d\n",n,i,n*i);
	i++;
}
return 0;
}
