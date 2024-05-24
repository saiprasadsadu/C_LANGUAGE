#include<stdio.h>
int main()
{
	char str[10]="saiprasad";
	char str1[10]={};
	int i=0,j=0,count=0;
	for(i=0;str[i];i++)
	{
		for(j=0;j<count;j++)
		{
			if(str[i]==str1[j])
				break;
		}
		if(count==j)
		{
			str1[j]=str[i];
			count++;
		}
	}
	printf("%s",str1);
}
