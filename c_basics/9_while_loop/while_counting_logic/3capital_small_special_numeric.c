//Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character.
#include<stdio.h>
int main()
{
	int n,i=1;
	char ch;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("enter a character:");
		getchar();
		scanf("%c",&ch);
		if(ch>=97&&ch<=122)
			printf("%c is small alphabet\n",ch);
		else if(ch>=65&&ch<=90)
			printf("%c is capiatl alphabet\n",ch);
		else if(ch>=48&&ch==57)
			printf("%c is numeric character\n",ch);
		else
			printf("%c is special character\n",ch);
		i++;
	}
}

