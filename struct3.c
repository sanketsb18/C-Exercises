/* Struct Examples using array. */

#include <stdio.h>
#define size 100

// creating a student structure template
   struct student {
    char firstname[64];
    char lastname[64];
    char id[64];
    int score;
  };
  
int main(void) {

    int i, n;
  
  // creating a student structure variable
  struct student stdarr[size];

  printf("Enter the number of students :");
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
  
    // taking user input
  printf("Enter First Name: ");
  scanf("%s", stdarr[i].firstname);
  
  printf("Enter Last Name: ");
  scanf("%s", stdarr[i].lastname);
  
  printf("Enter ID: ");
  scanf("%s", stdarr[i].id);
  
  printf("Enter Score: ");
  scanf("%d", &stdarr[i].score);

  printf("\n");
  }
  
  for(i=0; i<n; i++){
  printf("\nStudent Details:\n");
  printf("Firstname: %s\n", stdarr[i].firstname);
  printf("Lastname: %s\n", stdarr[i].lastname);
  printf("ID: %s\n", stdarr[i].id);
  printf("Score: %d\n", stdarr[i].score);
  }
  return 0;
}