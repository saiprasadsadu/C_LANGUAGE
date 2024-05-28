/*6) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_concat(char *str1,char *str2,int n,int m);

int main()
{
	int n,m;
	char *str1,*str2;
	str1=malloc(20*sizeof(char));
	str2=malloc(20*sizeof(char));
	if(str1==NULL || str2==NULL)
	{
		printf("memory not allocated");
		exit(0);//return 0;
	}
	printf("enter first string\n");
	scanf("%[^\n]s",str1);
	getchar();
	printf("enter second string\n");
	scanf("%[^\n]s",str2);
	printf("enter 1st string character length\n");
	scanf("%d",&n);
	printf("enter 2nd string character length\n");
	scanf("%d",&m);
	str_concat(str1,str2,n,m);


}

void str_concat(char *str1,char *str2,int n,int m)
{
	int i,j,len=0;
	char *temp1=malloc((n+m+1)*sizeof(char));
	char *temp2=malloc((m+1)*sizeof(char));
	
	for(i=0;i<n;i++)
	{
		temp1[i]=str1[i];
	}
	temp1[i]='\0';
	for(i=0;i<m;i++)
	{
		temp2[i]=str2[i];
	}
	temp2[i]='\0';
	
	for(i=0;temp1[i]!='\0';i++);
		len=i;

	for(i=0;temp2[i]!='\0';i++)
	{
		temp1[len+i]=temp2[i];
	}
	printf("concatenation string\n");
	printf("%s",temp1);
	free(temp1);
	free(temp2);

}
	

	

