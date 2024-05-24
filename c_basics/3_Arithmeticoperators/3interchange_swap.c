//Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter a value:");
scanf("%d\n%d\n%d",&a,&b,&c);
a=a+b+c;
c=a-b-c;
b=a-b-c;
a=a-b-c;
printf("a=%d b=%d c=%d",a,b,c);
return 0;
}

