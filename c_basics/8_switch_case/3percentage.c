/*Extend the percentage marks program to print the grade of the student as per below division , using switch statements.
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail
*/
#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,s6,per;
printf("enter 6 subjects marks:");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
per=(s1+s2+s3+s4+s5+s6)/6;
switch(per)
{
case 80 ... 100 :printf("honours");
break;
case 60 ... 79 :printf("first div");
break;
case 50 ... 59 :printf("second div");
break;
case 40 ... 49 :printf("third div");
break;
case 0 ...39 :printf("fail");
break;
}
return 0;
}


