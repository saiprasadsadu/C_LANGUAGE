#include<stdio.h>
   int main(){
   int a;
   printf("enter a number:");
   scanf("%d",&a);
if(a<=100)
printf("250 is the bil for %d calls",a);
else
printf("%f is the bill for %d calls", 250+(a-100)*1.25,a);
return 0;
}

