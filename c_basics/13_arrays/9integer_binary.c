//Write a program to print an integer in binary format using arrays.
#include<stdio.h>
int main()
{
	int n,i=0,a,b,var[8],s;
	printf("enter a integer:");
	scanf("%d",&n);
	while(n>0)
	{	
		var[i]=n%2;
		n/=2;
		i++;
		s=i-1;
	}
	for(i=s;i>=0;i--)
	{
		printf("%d",var[i]);
	}
	/*for(i=7;i>=0;i--)
	{
		var[i]=n%2;
		n/=2;
	}
	for(i=0;i<8;i++)
	{
		printf("%d",var[i]);
	}*/
}
