#include<stdio.h>
#include<stdlib.h>
int main()
{
	//char  *ptr;
	//double *ptr;
	int *ptr;
	long int count=0;
	/*while(1)
	{
		count++;
		ptr = (double *)malloc(1000000000*sizeof(double));
		//ptr=(char *)malloc(1000000000*sizeof(char));
		//free(ptr);
		if(ptr==NULL)
		{
			printf("memory not allocated\n");
			printf("in bytes %ld\n",1000000000*sizeof(double)*count);
			printf("total iterations %ld",count);
			exit(0);
		}
	}*/
	/*while(1)
	{
		count++;
		ptr = (char *)malloc(1000000000*sizeof(char));
		//ptr=(char *)malloc(1000000000*sizeof(char));
		//free(ptr);
		if(ptr==NULL)
		{
			printf("memory not allocated\n");
			printf("in bytes %ld\n",1000000000*sizeof(char)*count);
			printf("total iterations %ld",count);
			exit(0);
		}
	}*/
	while(1)
	{
		count++;
		ptr = (int *)malloc(1000000000*sizeof(int));
		//ptr=(char *)malloc(1000000000*sizeof(char));
		//free(ptr);
		if(ptr==NULL)
		{
			printf("memory not allocated\n");
			printf("in bytes %ld\n",1000000000*sizeof(int)*count);
			printf("in KB %ld\n",(1000000000*sizeof(int)*count)/1024);
			printf("total iterations %ld",count);
			exit(0);
		}
	}
	/*while(1)
	{
			count++;
			ptr=(int *)malloc(4096*sizeof(int));//4 pages at a time
			if(ptr==NULL)
			{
				printf("memory not allocated\n");
				printf("in bytes %ld\n",1000000000*sizeof(int)*count);
				printf("total iterations %ld",count);
				exit(0);
			}
		return 0;
			
	}*/




}
	

