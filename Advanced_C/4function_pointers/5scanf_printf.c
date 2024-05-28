/*5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

Try it again using alias name and array of function pointers.*/


//extern int printf (const char *__restrict __format, ...);

/*extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
*/


//extern int scanf (const char *__restrict __format, ...) ;


#include<stdio.h>
int main()
{

	int (* myprintf)(const char *, ...)=printf;
	int (* myscanf)(const char *, ...)=scanf;
	
	
	int num;
	
	myprintf("enter a number:");
	
	myscanf("%d",&num);
	
	myprintf("entered value %d",num);
	

}
	
