// results of a student
//----------------------

#include <stdio.h>
#include<string.h>
int main()
{
	float m1,m2,m3,m4,m5,m6,total,avg;
	char name[20],grade,result;
	printf("Enter Student Name: ");
	scanf("%s",&name);
	printf("\nEnter your Marks m1 , m2 , m3 , m4 , m5 , m6 :");
	scanf("\n%f%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&m6);
	total=m1+m2+m3+m4+m5+m6;
	avg=total/6;
	if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40 && m6>=40)
	{
		result='p';
		if(avg>=50 && avg<60 )grade='d';
		else if(avg>=60 && avg<70)grade='c';
		else if(avg>=70 && avg<80)grade='b';
		else if(avg>=80)grade='a';
	}
	else 
	{
		result='f';grade='f';
	}
	printf("Name : %s",name);
	printf("\nMarks : %f\t%f\t%f\t%f\t%f\t%f\t",m1,m2,m3,m4,m5,m6);
	printf("\nAverage : %f",avg);
	if(result=='p')printf("\nResult : Pass");
	else if(result=='f')printf("\nResult : Fail");
	printf("\nGrade : %c",grade);
}
