#include<stdio.h>
int main(){
int a,b,c,d;
printf("enter 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
	if(a>c)
	{
	        if(a>d)
			{
		    printf("%d is the biggest",a);
		       }
	        else{
	            printf("%d is the biggest",d);
	            }
         }
         else if(c>d)
		    {

		        printf("%d is the biggest",c);
                    }
		else
			{
			printf("%d is the biggest",d);
                        }
}
else if(b>c)
           {
           if(b>d)
		{
                 printf("%d is the biggest",b);
		}
	   else
		{
                 printf("%d is the biggest",d);
                }
           }
else if(c>d)
          {

           printf("%d is the biggest",c);
          }
     else
	  {
	  printf("%d is the biggest",d);

          }
return 0;
}

