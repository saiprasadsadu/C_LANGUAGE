/*void mystrupr (char str[]);
// convert all lower case alphabets to upper case in the given string
*/
#include<stdio.h>
void mystrupr(char str[]);
int main()
{
	int i;
	char str[100];
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	mystrupr(str);
}
void mystrupr(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		else
			str[i]=str[i];
	i++;
	}
	printf("%s",str);
}	

