#include<stdio.h>
int main(){
int p,n,r;
float m,si;
printf("enter principle,months and rate of intrest:");
scanf("%d%d%d",&p,&n,&r);
m=n/12.0;
si=(p*m*r)/100;
printf("simple intrest is:%f",si);
return 0;
}

