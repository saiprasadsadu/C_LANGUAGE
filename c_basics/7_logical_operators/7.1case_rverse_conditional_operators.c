#include<stdio.h>
int main()
{
char ch;
printf("enetr a character:");
scanf("%c",&ch);
(ch>=97 && ch<=122)?printf("%c",ch-32):(ch>=65 && ch<=90)?printf("%c",ch+32):printf("not an alphabet or invalid");
return 0;
}

