/*void mystrrev( char str[]);
//reverse the string (without using any extra array)

eg., input : str[] = "Kernel";
output : str[] = "lenreK"
*/
#include<stdio.h>
void mystrrev(char str[],int);
int main()
{
	int i=0;
	char str[100];
	printf("enter a string:");
	scanf("%99[^\n]s",str);
	while(str[i]!=0)
	{
		i++;
	}
	mystrrev(str,i);
}
void mystrrev(char str[],int n)
{
	int i=0;
	char temp;
	for(i=0;i<n/2;i++)
	{
		temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
	printf("%s",str);
}
