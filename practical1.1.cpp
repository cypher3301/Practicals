/*Displaying Marks of students using structure and also finding average marks of students*/

#include<stdio.h>
int main()
{
	struct student{
		float subject1,subject2,subject3,average,total;
	}students;
	printf("Subject 1 :");
	scanf("%f",&students.subject1);
	printf("Subject 2 :");
	scanf("%f",&students.subject2);
	printf("Subject 3 :");
	scanf("%f",&students.subject3);
	students.total = students.subject1 + students.subject2 + students.subject3;
	students.average = (students.subject1 + students.subject2 + students.subject3);
	printf("\nResults");
	printf("\nSubject 1 : %f",students.subject1);
	printf("\nSubject 2 : %f",students.subject2);
	printf("\nSubject 3 : %f",students.subject3);
	printf("\nAverage   : %f",students.average);
	printf("\nTotal     : %f",students.total);
}
