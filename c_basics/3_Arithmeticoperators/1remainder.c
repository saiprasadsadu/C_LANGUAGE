//Write a program that reads an integer and displays the right-most digit of the number.
#include<stdio.h>
int main(){
int a,b;
printf("enter a number:");
scanf("%d",&a);
b=a%10;
printf("remainder is:%d",b);
return 0;
}

