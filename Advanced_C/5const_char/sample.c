//constant key word usage........................


#include<stdio.h>


/*int main()
{
	const int x=5;
	//x=5;   not allowed

	//scanf("%d",&x);
	printf("%d",x);
}*/



//output:
/*sample.c: In function ‘main’:
sample.c:10:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%d",&x);
*/




//-----------------------------
//output :
/*sample.c: In function ‘main’:
sample.c:8:3: error: assignment of read-only variable ‘x’
  x=5;*/


// so from this we have learnt that we have to initialize while declaring the constant variable 
//const int x=5;


// pointer to constant means    ---- int const *ptr; (or)  const int *ptr;



/*int main()
{

	int x=5;
	const int *ptr=&x;  //same representation int  const  *ptr=&a ; both are same.
	// *ptr=10;  not allowed
	
	scanf("%d",ptr);
	printf("%d",*ptr);


}*/


//output:

/*sample.c: In function ‘main’:
sample.c:49:2: warning: writing into constant object (argument 2) [-Wformat=]
  scanf("%d",ptr);
*/





//output

/*sample.c: In function ‘main’:
sample.c:32:6: error: assignment of read-only location ‘*ptr’
  *ptr=10;
*/


/*int main()
{
	int x=5,y=6;
	int * const ptr=&x;
	//ptr=&x;  not allowed
	//ptr=&y;  not allowed

	*ptr=10;   //allowed 
	
	// *ptr++; not allowed

	//(*ptr)++;  allowed

	printf("%d",(*ptr)++);
}*/

//-------------------output-------------------
/*sample.c: In function ‘main’:
sample.c:79:5: error: assignment of read-only variable ‘ptr’
  ptr=&x;*/



//Applying constant keyword on arrays-------------------------------------

int main()
{
	const char s[]="kernel";
		
	//*(s+1)='a';      not allowed
	//s[2]='b';        not allowed
	printf("%s",s);

}

//---------------------output-----------------------------------------

/*sample.c: In function ‘main’:
sample.c:104:8: error: assignment of read-only location ‘*((const char *)&s + 1)’
  *(s+1)='a';
        ^
sample.c:105:6: error: assignment of read-only location ‘s[2]’
  s[2]='b';
*/



//    const keyword is also used in functions when we dont want to change the address of a pointer in call by reference

















