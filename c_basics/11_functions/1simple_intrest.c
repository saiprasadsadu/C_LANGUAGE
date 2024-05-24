//Write a function to calculate simple interest. Call it in main function with appropriate inputs and print the total amount the user will get after the tenure (principle + interest).
#include<stdio.h>
float simple_intrest(float p,int m,float r)
{
	float y,si;
	y=m/12.0;
	if(y==0)
	return 0;
	si=p*y*r/100.0;
	return si;
}
int main()
{
int m;
float r,si,p;
printf("enter principal,months and rate:");
scan:scanf("%f%d%f",&p,&m,&r);
si=simple_intrest(p,m,r);
if(m<1)
{
	printf("enter valid information:");
	goto scan;
}
else if(r==0)
	printf("%f",p);
	
else
	printf("simple inrest is %f and priciple is %f then total is %f",si,p,si+p);
return 0;
}
