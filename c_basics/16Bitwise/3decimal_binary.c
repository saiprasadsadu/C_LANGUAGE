/*Write a printbinary(int , int ) function consists of 2 integer variables. First one is value of the variable and second one is  size of variable. 
Example: 
char x=5; 
printbinary(x,sizeof(x)); 
output:  00000101
*/
#include<stdio.h>
void printbinary(int,int);
int main()
{
	int a;
	char ch;
	short int b;
	int c;
	scanf("%d",&a);
	printbinary(a,sizeof(ch));
	printbinary(a,sizeof(b));
	printbinary(a,sizeof(c));
}
void printbinary(int x,int s)
{
	for(int i=s*8-1;i>=0;i--)
	{
		if(x&(0x01<<i))
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
}
	
