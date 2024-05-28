/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In the main function, simply invoke this function by sending the appropriate function address, based on the operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"*/
#include<stdio.h>
int calci(int (*fptr)(int ,int),int a,int b);

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main()
{
	int a,b,c,ch;
	int (*fptr[10])(int,int)={add,sub,mul,div,mod};
	printf("enter a number: ");
	scanf("%d",&a);
	printf("enter a number: ");
	scanf("%d",&b);
	printf("enter a choice: ");
	scanf("%d",&ch);
	/*switch(ch)
	{
		case '+': calci(add,a,b);
				break;
		case '-': calci(sub,a,b);
				break;
		case '*': calci(mul,a,b);				//in case of whole switch statement we just passed using array to function pointers
				break;					//
		case '/': calci(div,a,b);
				break;
		case '%': calci(mod,a,b);
				break;
	}*/
	calci((*fptr[ch]),a,b);
}

int calci(int (*fptr)(int ,int),int a,int b)
{
	printf("%d  ",fptr(a,b));

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
	

