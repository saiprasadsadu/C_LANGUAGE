/*Write a program to find the power of a number to the given number.
eg.,input : 3 5
output: 3 to the power of 5 -> 243
*/
#include<stdio.h>
int main()
{
int pow=1,n1,n2,i=1;
printf("enter a number:");
scanf("%d",&n1);
printf("enter a number:");
scanf("%d",&n2);
while(i<=n2)
{
	pow*=n1;
	i=i+1;
}
printf("the power of %d and %d is:%d",n1,n2,pow);
return 0;
}

