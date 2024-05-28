//5) Implement itoa function and return the string from the function. Print the result in main. itoa function takes an integer as input, and stores the integer in a string.
#include<stdio.h>
#include<stdlib.h>
char * itoA(int n);
int main()
{
	int n;
	char *ret;
	printf("enter a number:");
	scanf("%d",&n);
	ret=itoA(n);
	printf("print the string\n");
	printf("%s",ret);
	free(ret);
	return 0;
}
char * itoA(int n)
{
	int i=0,j,len,digit_count=0;
	char temp1=n,temp;
	do
	{
		temp1/=10;
		digit_count++;
	}while(temp1>0);
	char *ptr;
	ptr=(char *) malloc(digit_count*sizeof(char));
	if(ptr==NULL)
	{
		printf("memeory not allocated\n");
		exit(0);
	}
	while(n>0)
	{
		ptr[i]=n%10+'0';
		n/=10;
		i++;
	}
	for(i=0;ptr[i]!='\0';i++);
		len=i;
	printf("%s",ptr);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
	return ptr;
}
