#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct student {
    char Name[50];
    long long int enroll;
    float subject1,subject2,subject3,total,average;
} students[10];

int main() {
    for (int i = 0; i < 3; i++)
	{
        printf("\nEnter Enrollment Number:");
        scanf("%lld",&students[i].enroll);
        printf("Enter Name: ");
        scanf("%s", students[i].Name);
        printf("Enter Subject 1 marks: ");
        scanf("%f", &students[i].subject1);
        printf("Enter Subject 2 marks: ");
        scanf("%f", &students[i].subject2);
        printf("Enter Subject 3 marks: ");
        scanf("%f", &students[i].subject3);
        students[i].total=students[i].subject1+students[i].subject2+students[i].subject3;
        students[i].average = (students[i].subject1+students[i].subject2+students[i].subject3)/3;
    }
    printf("\n\nDisplaying Information:\n\n");

    for (int i = 0; i < 3; i++)
	{
        printf("\nEnrolment No 	: %lld\n",students[i].enroll);
        printf("First name: ");
        puts(students[i].Name);
        printf("Subject : %0.2f", students[i].subject1);
        printf("\n");
        printf("Subject 2: %0.2f", students[i].subject2);
        printf("\n");
        printf("Subject 3: %0.2f", students[i].subject3);
        printf("\n");
        printf("Average :  %f  \n ",students[i].average);
    }
    return 0;
}
