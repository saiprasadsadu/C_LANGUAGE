/* implement a function to receive a sentence as input, and return the string with the words reversed,
eg., input: Kernel Masters is best for embedded systems.
output: systems embedded for best is Masters Kernel.*/

#include<stdio.h>
void mystrlen(char []);
void word_reverse(char str[],int);
void swap(char *,char *);
char * strrev(char *,int len);
int main()
{
	char str[100];
	printf("enter a string:");
	scanf("%[^\n]s",str);
	mystrlen(str);
	printf("%s",str);
}
void mystrlen(char *str)
{
	int i=0,length=0,j=0;
	for(i=0;str[i]!=0;i++);
	length=i;
	strrev(str,length);//calling reverse function
	word_reverse(str,length);//words reverse

}

void word_reverse(char str[],int length)
{
	int start=0,i;
	for(i=0;i<=length;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			
			for(int j=start;j<(start+i)/2;j++)
			{
				swap((str+j),(str+i-1-(j-start)));
			}
			start=i+1;
		}
	}
}





void swap( char *a, char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
char * strrev(char s[],int len)
{
	int i;
	char temp,*ptr=s;//*ptr =s giving base address of string to pointer variable
	for(i=0;i<len/2;i++)
	{
		swap((s+i),(s+len-i-1));
	}
	return ptr;
}

