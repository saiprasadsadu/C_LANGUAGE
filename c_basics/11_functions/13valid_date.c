//Write a function that takes 2 dates as inputs, and returns 1 if the first date is old, 2 if the second date is old.
#include<stdio.h>
#include<stdio.h>
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
int older(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if(y1<y2||y1==y2&&m1<m2||y1==y2&&m1==m2&&d1<d2)
	{
		return 1;
	}
	else if(y1==y2 &&m1==m2&&d1==d2)
	{
		return 0;
	}
	
	else
		return 2;
}
int main()
{
	int d1,m1,y1,d2,m2,y2,old;
	scan:printf("enter 1st date:");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("enter 2nd date:");
        scanf("%d-%d-%d",&d2,&m2,&y2);
	if(date(d1,m1,y1)&&date(d2,m2,y2))
	{
		old=older(d1,m1,y1,d2,m2,y2);
		if(old==1)
	
			printf("1 is big");
	
                else if(old==2)
		{
			printf("2 is big");
		}
		else
		{
			goto scan;
		}

	}
	else
	{
	goto scan;
	}
return 0;
}





