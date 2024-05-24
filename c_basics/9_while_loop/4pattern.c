/*Write a program to print the value of below series:
1 - 1/2 + 1/3 - 1/4 .... + 1/n etc*/

#include<stdio.h>
int main()
{
int i=2,n;


printf("enter a number:");
scanf("%d",&n);
printf("1");
while(i<=n)
{
	if(i%2!=0)
       {
	printf("+1/%d",i);
      }
	else
      {
	printf("-1/%d",i);
      }
	i++;
}
return 0;
}
