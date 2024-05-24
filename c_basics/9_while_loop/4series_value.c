#include<stdio.h>
int main()
{
int i=1,sign,n;
float value=0;
/*sign =1;
printf("enter a number");
scanf("%d",&n);
while(i<=n)
{
	value+=sign*((float)1/i);
	i+=1;
	sign*=-1;
}
printf("%.2f",value);
return 0;
}*/



printf("enter a number:");
scanf("%d",&n);
while(i<=n)
{
	if(i%2!=0)
       {
	value+=((float)1/i);
      }
	else
      {
	value+=(-1*(1.0/i));
      }
	i++;
}
printf("%.2f",value);
return 0;
}

