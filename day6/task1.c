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

void parseString(char* input, Student* students, int size);

int main()
 {
    int size,i;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    Student* students = (Student*)malloc(size * sizeof(Student));

    if (students == NULL) 
	{
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    getchar(); 
    char input[100];
    printf("\nEnter the student details in the format (rollno name marks):\n");

    for ( i = 0; i < size; i++)
	 {
        printf("Student %d: ", i + 1);
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        parseString(input, &students[i], size);
    }

    printf("\nStudent details:\n");
    for ( i = 0; i < size; i++) 
	{
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}

void parseString(char* input, Student* student, int size) 
{
    char* token = strtok(input, " ");
    student->rollno = atoi(token);

    token = strtok(NULL, " ");
    strncpy(student->name, token, sizeof(student->name) - 1);
    student->name[sizeof(student->name) - 1] = '\0';

    token = strtok(NULL, " ");
    student->marks = atof(token);
}

