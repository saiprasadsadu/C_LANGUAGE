//for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).
#include<stdio.h>
int main()
{
int n,tel,hi,eng,mat,sci,so,i=1,rollnumber,result=0;
float percentage;
printf("enter number of students:");
scanf("%d",&n);
while(i<=n)
{
	printf("enter subject marks of students:");
	scanf("%d%d%d%d%d%d",&tel,&hi,&eng,&mat,&sci,&so);
	percentage=(float)(tel+hi+eng+mat+sci+so)/6;
	if(percentage>result)
	{
		result=percentage;
		rollnumber=i;
	}
	i++;
}
printf("the student %d with percentage:%.2f   is topper",rollnumber,percentage);
return 0;
}

