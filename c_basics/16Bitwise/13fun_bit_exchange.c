/*Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).
*/
#include<stdio.h>
void functionsetbits(int,int,int,int);
void printbinary(int,int);
int main()
{
	int x,y,n,p;
	printf("enter two number:");
	scanf("%d%d",&x,&y);
	printf("enter value and position:");
	scanf("%d%d",&n,&p);
	printf("x:");
	printbinary(x,sizeof(char));
	printf("y:");
	printbinary(y,sizeof(char));
	functionsetbits(x,y,n,p);
}
void functionsetbits(int x,int y,int n,int p)
{
	int result,temp=p;
	for(int i=n-1;i>=0;i--)
	{
		x=x&(~(0x01<<--p));
	}
	printf("x clear:");
	printbinary(x,sizeof(char));
	for(int i=n;i<sizeof(char)*8;i++)
	{
		y=y&(~(0x01<<i));
	}
	printbinary(y,sizeof(char));
	y=y<<(temp-n);
	printf("y shift:");
	printbinary(y,sizeof(char));
	result=x|y;
	printf("result is:");
	printbinary(result,sizeof(char));
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
	
