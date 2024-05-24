/*) int mystrchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 
*/
#include<stdio.h>
int mystrchr(char str[],char ch);
int main()
{
	int i=0,index;
	char str[100];
	char ch;
	printf("enter a string:");
	scanf("%[^\n]s",str);
	getchar();
	printf("enter a character:");
	scanf("%c",&ch);
	
	index=mystrchr(str,ch);
	if(index==-1)
		printf("not found");
	else
		printf("the character found at index:%d",index);
}
int mystrchr(char str[],char ch)
{
	int i=0,index;
	while(str[i]!=0)
	{
		if(str[i]==ch)
		{
			index=i;
			return i;
		}
		i++;

	}
	return -1;
}
