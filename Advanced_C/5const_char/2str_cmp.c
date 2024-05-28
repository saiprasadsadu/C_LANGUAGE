//2) Implement your own string comparison function and try calling the function using two string constants as input arguments.

int mystrcmp(const char s1[],const char s2[]);
#include<stdio.h>
int main()
{
	int ret;
	const char s1[100],s2[100];
	printf("enter first string:");
	scanf("%[^\n]s",s1);
	getchar();
	printf("enter second string:");
	scanf("%[^\n]s",s2);
	ret=strcmp(s1,s2);
	if(ret==0)
		printf("both are equal");
	else if(ret >0)
		printf("s1 is greater than s2");
	else
		printf("s1 is smaller than s2");

}

int mystrcmp(const char s1[],const char s2[])
{
	int i;
	for(i=0;*(s1+i)!='\0' || *(s2+i)!='\0';i++)
	{
		if(*(s1+i)==*(s2+i))
		{
			continue;
		}
		else 
			return *(s1+i)-*(s2+i);
	}
	return 0;
}

//------------------------------------output----------------------------------

/*2str_cmp.c: In function ‘main’:
2str_cmp.c:10:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%[^\n]s",s1);
  ^~~~~
2str_cmp.c:13:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%[^\n]s",s2);

but we get output exactly
*/



