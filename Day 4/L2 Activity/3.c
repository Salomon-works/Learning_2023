#include <stdio.h>
#include <stdlib.h>

// Structure to represent student information
struct Student {
    char name[50];
    float marks;
};

// Function to read student details
void readStudentDetails(struct Student *student) {
    printf("Enter student name: ");
    scanf(" %[^\n]s", student->name);

    printf("Enter student marks: ");
    scanf("%f", &student->marks);
}

// Function to compute average marks for a class
float computeAverageMarks(struct Student *students, int n) {
    float totalMarks = 0.0;

    for (int i = 0; i < n; i++) {
        totalMarks += students[i].marks;
    }

    return totalMarks / n;
}

// Function to display students scoring above and below average marks
void displayAboveBelowAverage(struct Student *students, int n, float average) {
    printf("\nStudents scoring above average marks:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > average) {
            printf("Name: %s\nMarks: %.2f\n", students[i].name, students[i].marks);
        }
    }

    printf("\nStudents scoring below average marks:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < average) {
            printf("Name: %s\nMarks: %.2f\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    int n;
    struct Student *students;
    float averageMarks;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for student structures dynamically
    students = (struct Student *)malloc(n * sizeof(struct Student));

    // Read details for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        readStudentDetails(&students[i]);
    }

    // Compute average marks for the class
    averageMarks = computeAverageMarks(students, n);

    // Display students scoring above and below average marks
    displayAboveBelowAverage(students, n, averageMarks);

    // Free the allocated memory
    free(students);

    return 0;
}
