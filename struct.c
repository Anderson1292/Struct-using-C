#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	char name[60];
	char subject[30];
	float first_test_score;
	float second_test_score;
};
int main(int argc, char *argv[]) {
	
	struct student Student;
	printf("\n------------ Student Registration -------------\n\n");
	printf("Student's name: ");
	fflush(stdin);
	fgets(Student.name,60,stdin);
	
	printf("Subject: ");
	fflush(stdin);
	fgets(Student.subject,30,stdin);
	
	printf("Student first grade: ");
	scanf("%f",&Student.first_test_score);
	printf("Student second grade: ");
	scanf("%f",&Student.second_test_score);
	
	printf("\n\n------------- Reading Student Data --------------\n\n");
	printf("Student name: %s",Student.name);
	printf("Subject: %s",Student.subject);
	printf("First test score: %.2f",Student.first_test_score);
	printf("Second test score: %.2f",Student.second_test_score);
	return 0;
}
