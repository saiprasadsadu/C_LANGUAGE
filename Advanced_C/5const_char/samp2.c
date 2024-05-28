// preprocessor directives---------------------------------

#define BEGIN int main(void){
#define END }
#include<stdio.h>
//------------------------------MACROS USAGE------------------------

/* BEGIN
	printf("hello world");
	printf("hello brother");
END  */


//-------------------------------------else if ladder----------------------

/*int main()
{

if(m==1)
	printf("16bit");
else if(m==2)
	printf("32bit");
else if(m==3)
	printf("64bit");
else
	printf("not identify");

}*/

/* from the above example only one condition will become true among all the conditions ,but we are passing the whole code to covert into binay code .so the size of binary file is getting large to reduce this there are some preprocessor directives that will reduce th size of the binary file*/


//  #if,  #elif,  #endif ,#else  ,#ifdef  ,#ifndef  


/*#ifndef M
	//#error define macro M
	#warning define macro M
#endif  */

//#define M 1
/*int main()
{
	#if M==1
		printf("\n");//we can write multiple statements without braces in macros
		printf("16bit system");
	#elif M==2
		printf("32bit system");
	#elif M==3
		printf("64bit system");
	//#else
	//	printf("not identified");//endif compulsory for every #if
	#endif    
}*/

//------------------------------------m==1-------------------
 /*  so only 
	int main()
	{
		printf("\n");
		printf("16bit system");
	}
	will goes to binary file
*/
//-------------------------------m==2-----------------------
	/*int main()
          {
                 printf("\n");
                  printf("32bit system");
          }
 	*/
//-------------------------------------------------------------
	//command gcc -D  M=2 samp2.c -o c32
//for passing macro value using command prompt  using above command

//---------------------------------------------------------------

// if macro is not defined then the macro value is assumed to be '0' by default

//--------------------predefined Macros------------------------


int main()
{
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%s\n",__FILE__);
	printf("%d\n",__LINE__);
	printf("%d\n",__STDC__);
}













 
