/* Struct Examples. */

#include <stdio.h>

typedef struct {
    char * name;        // Struct declaration.
    int age;
} person;

int main() {
    person john;

    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);
}