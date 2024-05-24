/*Read two numbers from the user, and print all serial numbers between those numbers.

eg., inputs: 10   20
output: 10 11 12 13 14 15 16 17 18 19 20
*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers for range:");
scanf("%d%d",&a,&b);
while(a<=b)
{
	printf("%d  ",a++);
}
return 0;
}

