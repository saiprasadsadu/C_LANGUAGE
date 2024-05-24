//Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.
#include<stdio.h>
int isleap(int x)
{
	if(x%400==0||x%100!=0&&x%4==0)
		return 1;
	else
		return 0;
}		
int main()
{
	int n,leap;
	scan:printf("enter a year:");
	scanf("%d",&n);
	leap=isleap(n);
	if(n<1)
		goto scan;
	else if(leap==1)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("not a leap year"); 
	}
	return 0;
}
