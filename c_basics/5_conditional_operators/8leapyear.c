#include<stdio.h>
int main()
{
int a;
printf("enter a year:");
scanf("%d",&a);
a%400==0?printf("leap year"):a%4==0?a%100!=0?printf("leapyear"):printf("not a leapyear"):printf("not a leapyear");
return 0;
}

