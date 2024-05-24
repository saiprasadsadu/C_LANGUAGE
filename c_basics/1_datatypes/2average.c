#include<stdio.h>
int main(){
int a,b,c,d,sum;
float avg;
printf("enter 4 integers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum= a+b+c+d;
avg =(float)sum/4;
printf("average is:%f",avg);
return 0;
}

