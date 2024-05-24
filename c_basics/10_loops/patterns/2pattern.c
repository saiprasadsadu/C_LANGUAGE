/*using while ,do while and for loops :
* * * * *
* * * *
* * *
* *
*
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
	for(j=1;j<=n-i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
}

