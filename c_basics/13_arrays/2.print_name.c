/*Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop
*/
#include<stdio.h>
int main()
{
	char arr[]={'s','a','i','p','r','a','s','a','d'};
	int i;
	for(i=0;i<9;i++)
	{
		printf("%c",arr[i]);
	}
}
