#include<stdio.h>
/*int main()
{
	int a=5;
	printf("after set result:%d",(a|0x04));//2nd bit position is set.
}
HARDCODE
****************************************************
GENRIC CODE
int main()
{
        int a,p;
	printf("enter a value and position:");
	scanf("%d%d",&a,&p);
        printf("after set result:%d\n",(a|(0x01<<p)));//2nd bit position is set.
        printf("after clear result:%d\n",(a&~(0x01<<p)));
        printf("after toggle result:%d\n",(a^(0x01<<p)));
}
*/



//USING MACROS.................................
#define SET_BIT(x,y) x|(0x01<<y)
#define CLEAR_BIT(x,y) x&(~(0x01<<y))
#define TOGGLE_BIT(x,y) x^(0x01<<y)


int main()
{
        int a,p;
        printf("enter a value and position:");
        scanf("%d%d",&a,&p);
        printf("after set result:%d\n",(SET_BIT(a,p)));//2nd bit position is set.
        printf("after clear result:%d\n",(CLEAR_BIT(a,p)));
        printf("after toggle result:%d\n",(TOGGLE_BIT(a,p)));
}

