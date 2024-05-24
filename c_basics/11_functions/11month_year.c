//Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.
#include<stdio.h>
int is_days(int m,int year)
{
	if(m==2)
	{
		if((year%4==0&&year%100!=0)||year%400==0)
			return 29;
		else
			return 28;
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		return 31;
	else
		return 30;

		 
}
int main()
{
int month,year,days;
scan:printf("enter month and year:");
scanf("%d%d",&month,&year);
days=is_days(month,year);
if(year<0||month<1|| month>12)
	goto scan;
else
{
	printf("%d",days);
}
return 0;
}

