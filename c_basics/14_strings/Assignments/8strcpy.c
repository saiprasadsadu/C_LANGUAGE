/*void mystrcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).
Implementation:
void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}
*/
#include<stdio.h>
void mystrcpy(char des[],char src[]);
int main()
{
	char src[100];
	char des[100];
	printf("enter source string:");
	scanf("%99[^\n]s",src);
        getchar();	
	printf("enter destination string:");
	scanf("%99[^\n]s",des);
	mystrcpy(des,src);
return 0;
}
void mystrcpy(char des[],char src[])
{
	int i=0;
	while(src[i]!=0)
	{
		des[i]=src[i];
		i++;
	}
	des[i]='\0';
	printf("the string after copy is:%s",des);
}
