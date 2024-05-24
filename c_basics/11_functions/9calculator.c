/*Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%
*/
#include<stdio.h>
int addition(int a,int b)
{
	return a+b;
}
int substraction(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{
	return a*b;
}
int quotient(int a,int b)
{
	if(b==0)
	{
		printf("zero divison error");
	}	
	else
	{
	return a/b;
	}
}
int remaind(int a,int b)
{
        if(b==0)
	{
                  printf("zero divison error");
        }
	else
	{
          return a%b;
 	}
}

int operator(int a,int b, char c)
{
	int result=0,scan;
	if(c=='+')
		result=addition(a, b);
	else if(c=='-')
		result=substraction( a, b);
	else if(c=='*')
		result=multiplication( a, b);
	else if(c=='/')
		result=quotient( a, b);
	else if(c=='%')
		result=remaind( a, b);
return result;
}	
int main()
{
	int x,y,result=0;
	char ch;
	printf("enter two numbers:");
	scanf("%d%d",&x,&y);
	scan:printf("enter a charcter:");
	getchar();
	scanf("%c",&ch);
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
	{
		result=operator(x,y,ch);
		printf("%d",result);
	}
	else
	{	
		goto scan;
	}
	return 0;
}

	
