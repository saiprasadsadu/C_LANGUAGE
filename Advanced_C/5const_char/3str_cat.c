/*
3) Implement your own string concatenation function.
try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source
note down the output and analyze the reasons.
*/

#include<stdio.h>
char * strcat(const  char des[],const  char src[]);
int main()
{
	const  char src[100];
	const  char des[100];
	printf("enter source string:");
	scanf("%99[^\n]s",src);
	getchar();
	printf("enter destination string:");
	scanf("%99[^\n]s",des);
	char * base=strcat(des,src);
	printf("%s",base);
}
char * strcat(const  char des[],const char src[])
{
	int j=0,i=0;
	while(*(des+i)!=0)
	{
		i++;
	}
	while(*(src+j)!='\0')
	{
		*(des+i+j)=*(src+j);
		j++;
	}
	*(des+i+j)='\0';
	return des;
}

//--------------------------------------------case 1---------------------------------

/* char src[],const char des[]

ouput:3str_cat.c: In function ‘main’:
3str_cat.c:21:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%99[^\n]s",des);
  ^~~~~
3str_cat.c: In function ‘strcat’:
3str_cat.c:34:13: error: assignment of read-only location ‘*(des + ((sizetype)i + (sizetype)j))’
   *(des+i+j)=*(src+j);
             ^
3str_cat.c:37:12: error: assignment of read-only location ‘*(des + ((sizetype)i + (sizetype)j))’
  *(des+i+j)='\0';
            ^
3str_cat.c:38:9: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  return des;
*/


//------------------------------------------case 2----------------------------------


/*  const char src[],char des[]

output :  3str_cat.c: In function ‘main’:
3str_cat.c:18:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%99[^\n]s",src);


*/


//-------------------------------------------case 3-------------------------------------


/* char src[],char des[]

without warnings output will be printed

*/

//-------------------------------------------case 4-------------------------------------

/*  const char src[],const char des[]

output:3str_cat.c: In function ‘main’:
3str_cat.c:18:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%99[^\n]s",src);
  ^~~~~
3str_cat.c:21:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%99[^\n]s",des);
  ^~~~~
3str_cat.c: In function ‘strcat’:
3str_cat.c:34:13: error: assignment of read-only location ‘*(des + ((sizetype)i + (sizetype)j))’
   *(des+i+j)=*(src+j);
             ^
3str_cat.c:37:12: error: assignment of read-only location ‘*(des + ((sizetype)i + (sizetype)j))’
  *(des+i+j)='\0';
            ^
3str_cat.c:38:9: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  return des;
         ^~~
3str_cat.c: At top level:
3str_cat.c:85:1: error: unterminated comment
  const char src[],const char des[]


*/
