//WAP whether a number is a power of 2 or not?
void count(int,int);
#include<stdio.h>
int main()
{
        int a;
        printf("enter a value:");
        scanf("%d",&a);
        count(a,sizeof(a));
}
void count(int x,int s)
{
        int counting=0;
        for(int i=s*8-1;i>=0;i--)
        {
                if(x&(0x01<<i))
                {
                        counting++;
                }
        }
	if(counting==1)
        	printf("power of 2");
	else
		printf("not power of 2");
}


