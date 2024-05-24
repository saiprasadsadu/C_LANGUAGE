#include"my.h"
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

