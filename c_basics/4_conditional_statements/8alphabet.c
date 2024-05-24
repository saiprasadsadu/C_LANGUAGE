#include<stdio.h>
int main(){
char a;
printf("enter a character:");
scanf("%c",&a);
if(a>=97){
	if(a<=122)
		printf("%c is the small alphabet",a);
	else
		printf("%c not the albhabet",a);
}
else if(a>=65)
	if(a<=90)
		printf("%c is the big alphabet",a);
	else 

		printf("%c not the aplphabet",a);

else
{
printf("%c not the aplphabet",a);
}
return 0;
}

