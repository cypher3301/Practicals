/*Searching and printing deatails of students using array and structure*/


#include<stdio.h>
int main()
{
	struct student{
		char Name[10];
		long int enroll;
		int Marks;
	}students[5];


	for(int i=0;i<3;i++)
	{
		printf("Student %d\n",i+1);
		printf("Enter name :");
		scanf("%s",students[i].Name);
		printf("Enter En.no :");
		scanf("%lu",&students[i].enroll);
		printf("Enter marks :");
		scanf("%d",&students[i].Marks);
	}


	int n;
	printf("Search for any student by enrollment\n ");
	printf("Enter enrollment number :");
	scanf("%d",&n);


	for(int i=0;i<3;i++)
	{
		if(students[i].enroll == n)
		{
			printf("\nName of student : %s",students[i].Name);
			printf("\nEn : %lu",students[i].enroll);
			printf("\nmarks : %d",students[i].Marks);
		}
	}
}
