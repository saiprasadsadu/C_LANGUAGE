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
int n,i,j,k;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("  ");
	}
	for(k=1;k<=n-i;k++)
	{
		printf("* ");
	}
	printf("\n");
}
}


