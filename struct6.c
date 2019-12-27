/* Return struct from the function. */

#include <stdio.h>
struct student          // creating a student info structure template.
{
    char name[50];
    char lastname[50];
    char id[50];
    int age;
};

/* function declaration */
struct student getInformation();

int main()
{
    struct student s;       //structure variables

    s = getInformation();       //function call
    
    printf("\nDisplaying information\n");
    printf("\nFirst Name : %s", s.name);
    printf("\nLast Name : %s", s.lastname);
    printf("\nId : %s", s.id);
    printf("\nAge : %d\n", s.age);
    
    return 0;
}

/* Function definition. */
struct student getInformation() 
{
  struct student s1;

  printf("Enter First name: ");
  scanf ("%[^\n]%*c", s1.name);
  printf("Enter Last name: ");
  scanf ("%[^\n]%*c", s1.lastname);
  printf("Enter id: ");
  scanf ("%[^\n]%*c", s1.id);
  printf("Enter age: ");
  scanf("%d", &s1.age);

  return s1;
}