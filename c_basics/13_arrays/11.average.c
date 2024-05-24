//Write a function to return the average of marks of all students in a class.
#include<stdio.h>
float average_student(int sum,int subjects)
{
	float average;
	average=(float)sum/subjects;
	return average;
}
int main()
{
	int i,j,marks,subjects=6,students,sum=0;
	float average;
	printf("enter number of students:");
	scanf("%d",&students);
	float var[students];
	for(i=0;i<students;i++)
	{
		printf("enter marks of %d student:",i);
		for(j=0;j<subjects;j++)
		{
			scanf("%d",&marks);
			sum+=marks;
		}
		average=average_student(sum,subjects);
		var[i]=average;
		sum=0;
	}
	for(i=0;i<students;i++)
	{
		printf("%f  ",var[i]);
	}
	
}	
		
