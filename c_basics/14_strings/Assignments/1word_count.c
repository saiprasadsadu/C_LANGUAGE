//Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.
#include<stdio.h>
int main()
{
	int wcount=0,charcount=0,i=0;
	char str[100];
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	while(str[i]!=0)
	{
		if(str[i]!=' ' && str[i]!= '!' && str[i]!= '?' && str[i]!= '.'&& str[i]!=',')
		{
			charcount++;
		}
		else if(str[i]==' ' ||str[i]== '!' ||str[i]== '?' ||str[i]== '.'||str[i]==',')
		{
			if(charcount>0)
			{
				wcount++;
				charcount=0;
			}
		}
		i++;
	}
	if(charcount>0)
	{
		wcount++;
	}
	printf("word count is:%d",wcount);
	return 0;
}
