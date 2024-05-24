//Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.
#include<stdio.h>
int multiply(int a,int b)
{
	int i,j,multiple=0,temp=a;
	for(i=1;i<b;i++)
	{
		multiple=0;
		for(j=1;j<=temp;j++)
		{
			multiple+=a;
		}
		a=multiple;
	}
	return multiple;
}

int power(int x,int y)
{
int powe;
powe=multiply(x,y);
return powe;


}  		
int main()
{
int a,n,powe;
printf("enter two number:");
scanf("%d%d",&a,&n);
powe=power(a,n);
printf("%d",powe);
return 0;
}
