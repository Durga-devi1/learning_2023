#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
 {
    int rollno;
    char name[100];
    float marks;
} 
Student;

void initializeStudents(Student* students, int size);
void sortStudentsByMarks(Student* students, int size);
void displayStudents(Student* students, int size);

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);
    Student* students = (Student*)malloc(size * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    initializeStudents(students, size);
    sortStudentsByMarks(students, size);

    printf("\nStudent details (sorted by marks in descending order):\n");
    displayStudents(students, size);
    free(students);

    return 0;
}

void initializeStudents(Student* students, int size) {
	int i;
    for (i = 0; i < size; i++) {
        students[i].rollno = i + 1;
        strcpy(students[i].name, "Unknown");
        students[i].marks = (float)(rand() % 101);  
    }
}

void sortStudentsByMarks(Student* students, int size)
 {
 	int i,j;
    for ( i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) 
			{

                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStudents(Student* students, int size)
 {
 	int i;
    for ( i = 0; i < size; i++)
	 {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

