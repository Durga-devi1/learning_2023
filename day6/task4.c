#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int rollno;
    char name[20];
    float marks;
} 
Student;

void displayStudents(Student* students, int size);

int main() 
{
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);
    Student* students = (Student*)malloc(size * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    printf("\nStudent details:\n");
    displayStudents(students, size);
    free(students);

    return 0;
}

void displayStudents(Student* students, int size) 
{
	int i;
    for ( i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

