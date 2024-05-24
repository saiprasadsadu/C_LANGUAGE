//Read n characters from user, and print if each character is vowel or not.
#include<stdio.h>
int main()
{
int n,i=1,vowelcount=0;
char ch;
printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter a character:");
	getchar();
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c is vowel",ch);
		vowelcount+=1;
		printf("\n");
	}
	else
	{
		printf("%c is not vowel",ch);
		printf("\n");
	}
	i++;
}
printf("vowel count is:%d",vowelcount);
}


