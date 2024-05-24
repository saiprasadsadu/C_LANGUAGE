#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	c>=97?c<=122?printf("%c",c-32):printf("not valid"):c>=65?c<=90?printf("%c",c+32):printf("not valid "):printf("not valid");   
   
   return 0;
   }
  

