#include<stdio.h>
int main()
{
	int num;
	do
	{
		printf("1.check stock");
		printf("2.sell");
		printf("3.purchase");
		printf("4.quit");
		printf("enter a number:");
		scanf("%d",num);
	}while(num<0&&num>4);
	switch(num)
	{
	case 1:stock();
		break;
	case 2:sell();
		break;
	case 3:purchase;
		break;
	case 4:	break;
	}
return 0;
}
