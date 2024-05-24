#include"my.h"
int date(int d,int m,int year)
{
	int is_leap=28;
		if(year%100!=0&&year%4==0||year%400==0)
			is_leap=29;
		if(m==2 &&(d<1 ||d>is_leap))
			return 0;
		else if(year<1||d<1||d>31||m<1||m>12 )
                        return 0;

		else if((m==4 || m==6 || m==9 || m==11)&&d>30)
			return 0;	
		else
			return 1;

}

