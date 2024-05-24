/*print the below patterns wihtout using nested for loop:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
int n,i=1,j=1,a=1;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;)
{
	if(j<=i)
	{
		if((j+i)%2==0)
			printf("1");
		else
			printf("0");
		j++;
		continue;
	}
	printf("\n");
	j=1;
	i++;
}
}

