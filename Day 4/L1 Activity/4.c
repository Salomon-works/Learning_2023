#include <stdio.h>
#include <stdlib.h>

// Structure to represent a student
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    struct Student *students;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n student structures
    students = (struct Student *)malloc(n * sizeof(struct Student));

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input the name
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        // Input the age
        printf("Age: ");
        scanf("%d", &students[i].age);

        // Input the marks
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the stored data for each student
    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free the allocated memory
    free(students);

    return 0;
}
