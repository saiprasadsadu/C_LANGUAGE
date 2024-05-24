//Write a function that takes an integer number as input and prints its multiplication table.return type is  void.
#include<stdio.h>
void table(int x)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",x,i,x*i);
	}
}
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
table(n);
return 0;
}
