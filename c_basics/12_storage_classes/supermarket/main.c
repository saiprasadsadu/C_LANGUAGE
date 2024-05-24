#include<stdio.h>
#include"my.h"
extern int stock;
int main()
{
	int num;
	do
	{
		printf("1.check stock\n");
		printf("2.sell\n");
		printf("3.purchase\n");
		printf("4.quit\n");
		printf("enter a number:");
		scanf("%d",&num);
		switch(num)
		{
			case 1:printf("available stock is:%d\n",stock);
			break;
			case 2:sell();
			//printf("after sell available stock:%d\n",stock);
			break;
			case 3:purchase();
			//printf("after purchase available stock:%d\n",stock);
			break;
			case 4:return 0;
			default:printf("enter valid option");
		}
	}while(1);

return 0;
}

