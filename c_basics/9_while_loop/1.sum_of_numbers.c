//Write  a program to read n numbers from the keyboard and find their sum.
#include<stdio.h>
int main()
{
int sum=0,i=1,n,number;
printf("enter the number:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter the adding number:");
	scanf("%d",&number);
	sum+=number;
	i+=1;
}
printf("%d",sum);
return 0;
}

