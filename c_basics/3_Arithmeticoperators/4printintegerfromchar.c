/*Input 3 digits, read them into three different characters. Make one integer out of them and display.
Eg., input 345.(stored as char c =‘3’,b=‘4’,d=‘5’.)
Output : int i = 345. ( store 345 in integer i and print the value of i as output).

hint: any digital character can be converted to a corresponding digit by subtraction with '0'.*/

#include<stdio.h>
int main()
{
char a,b,c;
printf("enter 3 characters:");
scanf("%c\n%c\n%c",&a,&b,&c);
int i=(a-'0')*100+(b-'0')*10+(c-'0');
printf("%d",i);
return 0;
}

