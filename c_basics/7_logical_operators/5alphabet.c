//Read a character and print if it is alphabet or not.
#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
	printf("alphabet");
else if(ch>=65 && ch<=90)
	printf("alphabet");
else
	printf("not a alphabet");
return 0;
}

