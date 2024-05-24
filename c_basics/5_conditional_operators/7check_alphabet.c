#include<stdio.h>
int main()
{
char c;
printf("enter a character:");
scanf("%c",&c);
c>=97?c<=122?printf("alphabet"):printf("not an alphabet"):c>=65?c<=90?printf("alphabet"):printf("not a alphabet"):printf("not an alphabet");
return 0;
}

















