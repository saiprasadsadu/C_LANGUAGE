/*Find the power bill for the input number of units
 for 0-to 200 bill is 100
 for 201 to 400 bill is 100+0.65 for every extra unit
 for 401 to 600 bill is 230+0.8  for every extra unit*/
#include<stdio.h>
int main()
{
int units;
float bill;
printf("enter number of units:");
scanf("%d",&units);
if(units>0 &&units<=200)
	printf("bill is 100");
else if(units>200&&units<=400)
	printf("bill is:%f",bill=100+(units-200)*0.65);
else if(units>400&&units<=600)
	printf("bill is:%f",bill=230+(units-400)*0.8);
else
	printf("bill is:%f",bill=390+(units-600)*1.0);
return 0;
}

