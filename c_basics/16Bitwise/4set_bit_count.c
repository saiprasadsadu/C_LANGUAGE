//WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
#include<stdio.h>
//#define CHECK(x) x&(0x01)
void count(int,int);
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
	printf("the number of 1's:%d",counting);
}
			
	
