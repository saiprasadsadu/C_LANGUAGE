/*Read two numbers from the user, and print all numbers in reverse order.

eg., inputs: 10   20
output:
20 19 18 17 16 15 14 13 12 11 10
*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers for range:");
scanf("%d%d",&a,&b);
while(b>=a)
{
	printf("%d  ",b--);
}
return 0;
}
