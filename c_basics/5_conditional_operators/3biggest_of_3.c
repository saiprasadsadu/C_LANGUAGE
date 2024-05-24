#include<stdio.h>
   int main()
   {
   int a,b,c;
   printf("enter 3 numbers:");
   scanf("%d %d %d",&a,&b,&c);
   (a>b)?(a>c)?printf("%d is big",a):printf("%d is big",c):b>c?printf("%d is big",b):printf("%d",c);
   return 0;
   }
  

