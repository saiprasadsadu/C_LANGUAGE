//implement sizeof()operator without using sizeof
#include<stdio.h>
/*int main()
{
int count=0;
float a=1;
while(a!=0)
{
	a=a<<1;
	count++;

}
printf("%d",count/8);
}
*/


#define size(type) (char *)(&type+1)-(char *)(&type)
int main()
{
	char ch;
	int a;
	float b;
	double d;
	printf("for character in bytes:%ld\n",size(ch));
	printf("for integer in bytes%ld\n",size(a));
	printf("for float in bytes%ld\n",size(b));
	printf("for double in bytes%ld\n",size(d));
	
}	
