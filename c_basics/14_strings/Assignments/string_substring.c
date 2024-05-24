/*example input:saiprasad
	substring:pra
	return index value
*/
#include<stdio.h>
int compare(char str[],char sub_str[]);
int main()
{
	char str[100],sub_str[100],index;
	printf("enter a string:");
	scanf("%[^\n]s",str);
	getchar();
	printf("enter a substring:");
	scanf("%[^\n]s",sub_str);
	index=compare(str,sub_str);
	if(index<0)
		printf("sub string not found");
	else
		printf("%d",index);
}
int compare(char str[],char sub_str[])
{
	int i=0,j=0,index=0,len=0,count=0;
	while(sub_str[len]!=0)
	{
		len++;
	}
	printf("%d",len);
	while(sub_str[i]!=0)
	{
		while(str[j]!=0)
		{
			if(sub_str[i]==str[j])
			{
				index=j;
				count++;
				j++;
				i++;
			}
			else
				break;
		}
		i=0;
		
	}
	if(i==0)
		return index-+1;
	else
		return -1;
				
}
