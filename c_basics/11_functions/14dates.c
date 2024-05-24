//Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid.
#include<stdio.h>
int date(int d,int m,int year)
{
	int is_leap=28;
	if(year%100!=0&&year%4==0||year%400==0)
		is_leap=29;
	if(m==2&&(d<1||d>is_leap))
		return 0;
	else if(year<1||d<1||d>31||m<1||m>12)
		return 0;
	else if((m==4 || m==6 || m==9 || m==11)&&d>30)
		return 0;
	else
		return 1;

}
int main()
{
	int month,year,day,valid_date;
	printf("enter month and year:");
	scanf("%d-%d-%d",&day,&month,&year);
	valid_date=date(day,month,year);
	if(valid_date==0)
		printf("it is not a valid date");
	else
	{
		printf("it is a valid date");
	}
	return 0;
}


