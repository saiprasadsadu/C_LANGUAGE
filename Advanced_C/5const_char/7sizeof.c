//7) Try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference./
#include<stdio.h>
#define SIZE(type) (char *)(&type+1)-(char *)(&type)
int main()
{
	
	char s[]="saiprasad";
	char *str1=s;
	char *str="saipra";
	printf("size of character array in bytes:%ld\n",SIZE(s));
	printf("size of character pointer in bytes%ld\n",SIZE(str1));
	printf("size ofstring constant  in bytes%ld\n",SIZE(str));
	
}

