/*4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}*/

#include<stdio.h>
void calci(int (*fptr[])(int ,int),int ,int ,int );

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main()
{
	int (*fptr[])(int ,int)={add,sub,mul,div,mod};
	int a,b,ch;
	printf("enter a number: ");
	scanf("%d",&a);
	printf("enter a number: ");
	scanf("%d",&b);
	printf("enter a choice :");
	scanf("%d",&ch);
	/*switch(ch)
	{
		case '+': calci(fptr,a,b,ch);
				break;
		case '-': calci(fptr,a,b,ch);
				break;
		case '*': calci(fptr,a,b,ch);
				break;
		case '/': calci(fptr,a,b,ch);
				break;
		case '%': calci(fptr,a,b,ch);
				break;
	}*/
	calci(fptr,a,b,ch);
}

void calci(int (*fptr[])(int ,int),int a,int b,int ch)
{
	int c;
	/*switch(ch)
	{
		case '+': c=(*fptr[0])(a,b);
				printf("sum %d",c);
				break;
		case '-': c=(*fptr[1])(a,b);
				printf("sub %d",c);
				break;
		case '*': c=(*fptr[2])(a,b);
				printf("mul %d",c);
				break;
		case '/': c=(*fptr[3])(a,b);
				printf("div %d",c);
				break;
		case '%': c=(*fptr[4])(a,b);
				printf("mod %d",c);

	}*/
	c=((* fptr[ch])(a,b));
	printf("result :%d",c);

}


int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}
int mod(int a,int b)
{
return a%b;
}

