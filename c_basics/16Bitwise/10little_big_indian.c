//. WAP to convert Little endian integer to Big endian integer.
#include<stdio.h>
int main()
{
	int a,result;
	printf("enter a value:");
	scanf("%x",&a);
	a=(a>>24 | a<<24 | (a>>8 & (0x0000ff00)) | (a<<8 & (0x00ff0000)));
	printf("big -Endian:%x",a);
}
	
