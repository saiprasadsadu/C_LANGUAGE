//read a 4 digit number and print it in the following formats
#include<stdio.h>
//int main(){
//int a,b,c,d;
//printf("enter a value:");
//scanf("%d",&a);
//b=a/10;
//a=a%10;//reaminder is 2
//c=b/10;
//b=b%10;//reaminder is 3
//d=c/10;
//c=c%10;//reaminder is 5
//d=d%10;//remainder is 4
//printf("%d\n%d\n%d\n%d\n",a,b,c,d);
int main(){

int a;
printf("enetr a number:");
scanf("%d",&a);
printf("%d\n",a%10);
printf("%d\n",(a/10)%10);
printf("%d\n",(a/100)%10);
printf("%d\n",(a/1000)%10);
printf("\n");
printf("\n");

printf("%d\n",a/1000);
printf("%d\n",(a%1000)/100);
printf("%d\n",(a%100)/10);
printf("%d\n",(a%10));
printf("\n");
printf("\n");


printf("%d\n",a/1000);
printf("%d\n",a/100);
printf("%d\n",a/10);
printf("%d\n",a);
printf("\n");
printf("\n");


printf("%d\n",a);
printf("%d\n",a/10);
printf("%d\n",a/100);
printf("%d\n",a/1000);
printf("\n");
printf("\n");


printf("%d",a%10);
printf(" %d",(a/10)%10);
printf(" %d",(a/100)%10);
printf(" %d",(a/1000)%10);
printf("\n");
printf("\n");


printf("%4d\n",a%10);
printf("%3d\n",(a/10)%10);
printf("%2d\n",(a/100)%10);
printf("%1d\n",(a/1000)%10);


return 0;
}




