#include <stdio.h>
#include <stdlib.h>

typedef struct
 {
    char name[50];
    int age;
    float marks;
} Student;

void storeData(Student* students, int n);
void displayData(Student* students, int n);

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student* students = (Student*)malloc(n * sizeof(Student));

    if (students == NULL)
	 {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    storeData(students, n);

    printf("\nStudent details:\n");
    displayData(students, n);
    free(students);
	 return 0;
}

void storeData(Student* students, int n)
 {
    printf("\nEnter the details for each student:\n");
    int i;
    for ( i = 0; i < n; i++)
	 {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayData(Student* students, int n)
 {
 	int i;
    for ( i = 0; i < n; i++) 
	{
        printf("\nStudent %d:\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

