#include<stdio.h>
#include<string.h>
int main()
{
	char str[15]="hello world";
	int i=0,j=0,k=0,len=0,m_count=0,c_count=0,w_count=0;
	len=strlen(str);
	
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		str[i]=str[i]+str[j];
		str[j]=str[i]-str[j];
		str[i]=str[i]-str[j];
	}
	for(k=0;k<2;k++)
	{
		for(i=m_count;i<=len;i++)
		{
			if(str[i]!=' ')
			{
				c_count++;
			}
			else
			{
				m_count=i+1;
				break;
			}
		}
		//printf("%d\n",c_count);//5 next 11
		//printf("%d\n",w_count);//0 next 6
		for(i=w_count,j=c_count-1;i<(w_count+c_count)/2;i++,j--)
		{
			str[i]=str[i]+str[j];
			str[j]=str[i]-str[j];
			str[i]=str[i]-str[j];
		}
		w_count=c_count+1; 
		//m_count=c_count+1;
	}
	printf("%s",str);
}
