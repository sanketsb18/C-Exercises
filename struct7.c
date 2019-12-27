/*
 * C program to demonstrate structures using dynamic memory and
 *  simple structure variable and pointer to structure variable.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Student type definition
struct student
{
    char name[40];              // Student name
    int  age;                   // Student age
    unsigned long long mobile;  // Student mobile number
};


int main()
{
    struct student student1;    // Simple structure variable
    struct student *student2;   // Pointer to student
    

    // Initialize pointer to student through dynamic memory allocation
    student2 = (struct student*) malloc(sizeof(struct student));
    
    // Input data in structure members using dot operator
    printf("Enter student name: ");
    fgets(student1.name, 40, stdin);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter student mobile no: ");
    scanf("%llu", &student1.mobile);

    // Eat new line from input buffer
    getchar();

    printf("\nStudent info using simple structure variable.\n\n");
    printf("Student name: %s",         student1.name);
    printf("Student age: %d\n",          student1.age);
    printf("Student mobile: %llu\n\n",   student1.mobile);



    // Input data in pointer to structure type using arrow operator
    printf("Enter student name: ");
    fgets(student2->name, 40, stdin);

    printf("Enter student age: ");
    scanf("%d", &student2->age);

    printf("Enter student mobile no: ");
    scanf("%llu", &student2->mobile);

    printf("\nStudent info using pointer to structure variable.\n\n");
    printf("Student name: %s",        student2->name);
    printf("Student age: %d\n",         student2->age);
    printf("Student mobile: %llu\n",    student2->mobile);


    // Clear memory that was alloacted dynamically
    free(student2);

 return 0;
}