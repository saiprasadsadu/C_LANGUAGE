/*Input an alphabet. Output its case reverse.
eg., input: a
output: A
input: U
output: u
            input: 4
           output: not an alphabet
                   using conditional operator & logical operator
*/
#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>=97&&ch<=122)
	printf("%c",ch-32);
else if(ch>=65 && ch<=90)
	printf("%c",ch+32);
else
	printf("in valid or not an alphabet");
return 0;
}

