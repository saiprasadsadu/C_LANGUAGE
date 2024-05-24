#include<stdio.h>
int main()
{
	unsigned int a;
	scanf("%X",&a);
	a=(a<<8&(0xff0000))|(a<<12&(0x00f000))|(a>>12&(0x000f00))|(a>>12&(0x0000f0))|(a>>4&(0x00000f));
	printf("%X",a);
}
