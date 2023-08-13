#include <stdio.h>
#include <stdlib.h>

// Structure to represent a person
struct Person {
    char name[50];
    int age;
};

// Function to modify the members of a structure using a pointer
struct Person* modifyStructure(struct Person* person) {
    // Modifying the members of the structure
    printf("Enter modified name: ");
    scanf(" %[^\n]s", person->name);

    printf("Enter modified age: ");
    scanf("%d", &(person->age));

    // Returning the modified structure
    return person;
}

int main() {
    struct Person person;
    struct Person* modifiedPerson;

    // Input the initial details for the person
    printf("Enter name: ");
    scanf(" %[^\n]s", person.name);

    printf("Enter age: ");
    scanf("%d", &(person.age));

    // Pass the pointer to the structure to the function and get the modified structure back
    modifiedPerson = modifyStructure(&person);

    // Display the modified structure
    printf("\nModified Structure:\n");
    printf("Name: %s\n", modifiedPerson->name);
    printf("Age: %d\n", modifiedPerson->age);

    return 0;
}
