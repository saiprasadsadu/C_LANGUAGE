/*5) Implement your own string reverse function using the above swap function to swap the edges while reversing.
try calling the string reverse function using
1) string variable
2) string constant
*/

int mystrlen(const char []);
char * strrev(const char []);
#include<stdio.h>
int len;
void swap(const char *a,const char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	const char str[100];
	printf("enter a string:");
	scanf("%[^\n]s",str);
	len=mystrlen(str);
	char *base= strrev(str);
	printf("%s",base);
	return 0;
}


int mystrlen(const char s[])
{
	int i;
	for(i=0;*(s+i)!='\0';i++);
	return i;
}


char * strrev(const char s[])
{
	int i;
	char temp,*ptr=s;//*ptr =s giving base address of string to pointer variable
	for(i=0;i<len/2;i++)
	{
		swap((s+i),(s+len-i-1));
	}
	return ptr;
}


