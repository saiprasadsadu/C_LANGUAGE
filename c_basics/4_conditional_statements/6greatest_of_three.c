#include<stdio.h>
int main(){
int a,b,c;
printf("enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
	if(a>c)
	  printf("%d is the greatest number",a);
	else{
	printf("%d is the greatest number",c);
	}
}
else if(b>c){
	  printf("%d is the gratest number",b);
}
else{
printf("%d is the greates",c);
}
return 0;
}
	
