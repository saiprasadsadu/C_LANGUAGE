/*1) Implement your own string copy function.
try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source
  note down the output and analyze the reasons.
*/

char * mystrcpy( const char d[],const  char s[]);
#include<stdio.h>
int main()
{
	const char s[100];
	char d[100];
	printf("enter a source string:");
	scanf("%[^\n]s",s);
	getchar();
	printf("enter a destination string:");
	scanf("%[^\n]s",d);
	char *r=mystrcpy(d,s);
	printf("the destination string is:%s\n",r);
}

char * mystrcpy( const char des[],const char scr[])
{
	//char *ptr=des;
	int i;
	for(i=0;*(scr+i)!='\0';i++)
		*(des+i)=*(scr+i);
	*(des+i)='\0';
	return des;
} 


//-------------------------------case 1----------------------------------
/*	char s[], const char des[]
	

output :  1try_const_on_strings.c: In function ‘main’:
1try_const_on_strings.c:20:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%[^\n]s",d);
  ^~~~~
1try_const_on_strings.c: At top level:
1try_const_on_strings.c:25:8: error: conflicting types for ‘mystrcpy’
 char * mystrcpy( char des[],const char scr[])
        ^~~~~~~~
1try_const_on_strings.c:10:8: note: previous declaration of ‘mystrcpy’ was here
 char * mystrcpy( const char d[],char s[]);
        ^~~~~~~~
1try_const_on_strings.c:37:1: error: unterminated comment
  char s[], const char des[]
*/


//-------------------------------case 2------------------------------------

/* const char s[],char des[]

ouput:1try_const_on_strings.c: In function ‘main’:
1try_const_on_strings.c:17:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%[^\n]s",s);

*/

//string will get copied


//-----------------------------case 3---------------------------------------

/* char s[],char des[]

ouput: string will get copied */


//----------------------------case 4------------------------------------------


/* const char s[],const char des[]
 
1try_const_on_strings.c: In function ‘main’:
1try_const_on_strings.c:17:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%[^\n]s",s);
  ^~~~~
1try_const_on_strings.c: In function ‘mystrcpy’:
1try_const_on_strings.c:30:11: error: assignment of read-only location ‘*(des + (sizetype)i)’
   *(des+i)=*(scr+i);
           ^
1try_const_on_strings.c:31:10: error: assignment of read-only location ‘*(des + (sizetype)i)’
  *(des+i)='\0';
          ^
1try_const_on_strings.c:32:9: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  return des;
         ^~~
1try_const_on_strings.c: At top level:
1try_const_on_strings.c:79:1: error: unterminated comment
  const char s[],const char des[]
*/

//---------------------------------------------------------------------------------------------------------------------------------






