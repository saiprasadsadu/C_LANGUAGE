//find area and perimeter of circle using cbv and cbr.
#include<stdio.h>
void are_peri(float*,float*,float);
int main()
{
	float r=10,area,perimeter;
	are_peri(&area,&perimeter,r);
	printf("main area is %f and perimeter %f\n",area,perimeter);
}
void are_peri(float *ar,float *per,float r)
{
	*ar=3.14*r*r;
	*per=2*3.14*r;
	printf("area is %f and perimeter is %f\n",*ar,*per);
}
	
