#include<stdio.h>
  int main()
   {
   int a;
   printf("enter the withdrawl amount:");
    scanf("%d",&a);
   if(a>=2000)
           {
            printf("no of 2000 notes:%d\n",a/2000);
           a=a%2000;
          }
  if(a>=500)
          {
           printf("no of 500 notes:%d\n",a/500);
           a=a%500;
          }
  if(a>=200)
          {
          printf("no of 200 notes:%d\n",a/200);
          a=a%200;
          }
  if(a>=100)        {
          printf("no of 100 notes:%d\n",a/100);
          a=a%100;
          }
  if(a>=50)
        {
          printf("no of 50 notes:%d\n",a/50);
          a=a%50;
          }
  else
          {
          printf("visit again thank you");
         }
 return 0;
 }

