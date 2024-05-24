/*Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers.

eg., inputs: 10   20
output: 
even numbers: 10 12 14 16 18 20
odd numbers: 11 13 15 17 19 
*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("enetr two numbers for range:");
scanf("%d%d",&a,&b);
c=a;
while(a<=b)
{
	if(a%2==0)
		printf("%d  ",a);
	a++;	
}
printf("\n");
while(c<=b)
{
	if(c%2!=0)
		printf("%d  ",c);
	c++;
}
}
