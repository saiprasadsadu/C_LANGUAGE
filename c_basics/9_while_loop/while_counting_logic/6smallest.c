//Read  n numbers from user ,and print the smallest number of all.
#include<stdio.h>
int main()
{
int n,i=1,small,number;
printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter decimal numbers:");
	scanf("%d",&number);
	if(i==1)
		small=number;
	else
		small=small>number?number:small;
	i++;
}
printf("the smallest among all is:%d",small);
return 0;
}


