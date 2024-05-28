#include<stdio.h>
#include<stdlib.h>
/*int main()
{
	int n,i;
	int *ptr;
	scanf("%d",&n);
	 ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("printing\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
}*/

/*int main()
{
	int a=5;
	float b=5.5;
	double d=5.054;
	char c=a;
	void *vp;
	vp=&a;
	printf("%d\n",*(int *)vp);
	vp=&b;
	printf("%f\n",*(float *)vp);

}*/


int main(void)

{

int *p,n,i;

printf("Enter the number of integers :");

scanf("%d",&n);

p = (int *)malloc(n * sizeof(int));

if( p == NULL)

{

printf("Memory not available\n");

exit(1);

}

for( i = 0; i<n; i++)

{

printf("Enter an integer : ");

scanf("%d", p+i);

}

for( i=0; i<n; i++)

{

printf("*(p+%d) = %d\t",i, *(p+i));

}

}
