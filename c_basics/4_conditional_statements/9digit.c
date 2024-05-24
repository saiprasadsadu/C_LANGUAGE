#include<stdio.h>
int main(){
char c;
int a;
printf("enter a character:");
scanf("%c",&c);
if(c>=48){
	if(c<=57)
		printf("is digit");
	else
		printf("not a digit");		
}
else
{
printf(" is not a digit");
}
return 0;
}

