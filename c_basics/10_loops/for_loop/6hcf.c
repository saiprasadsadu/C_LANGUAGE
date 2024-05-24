#include<stdio.h>

int main()
{
int a,b,x,y,i;
printf("enter two numbers:");
scanf("%d%d",&x,&y);
a=x;
b=y;
/*
for( ;a!=b;)
{
	if(a>b)
		a=a-b;
	else
		b=b-a;	
}
printf("LCM of %d and %d is:%d",x,y,a);
}*/
for(i=1;i<=b;i++)
{
	if((b*i)%a==0)
	{
		printf("hcf is:%d",i);
		break;
	}
}
for(i=1;i<=b;i++)
{
          if((a*i)%b==0)
                  {
                  printf("lcm is:%d",a*i);
                  break;
                  }
}
}


 
