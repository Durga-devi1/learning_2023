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

void searchByName(Student* students, int size, const char* name);

int main() 
{
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);
    Student* students = (Student*)malloc(size * sizeof(Student));

    if (students == NULL)
	 {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    char searchName[20];
    printf("\nEnter the name to search: ");
    scanf("%s", searchName);

    printf("\nSearch Results:\n");
    searchByName(students, size, searchName);
    free(students);

    return 0;
}

void searchByName(Student* students, int size, const char* name)
 {
    int found = 0,i;
    
    for ( i = 0; i < size; i++)
	 {
        if (strcmp(students[i].name, name) == 0) 
		{
            printf("Student %d:\n", i + 1);
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
        }
    }
    
    if (!found)
	 {
        printf("No students found with the name '%s'.\n", name);
    }
}

