#include<stdio.h>
#include"my.h"
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





