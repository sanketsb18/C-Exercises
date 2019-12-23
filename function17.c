/* Function with array parameters example. */

#include<stdio.h>

int add_array (int *a, int num_elements);
int main() {
    int i;
    int Tab[5];
    printf("Enter the array elements : \n");
    for(i=0; i<5; i++){
        printf("%d element of an array : ", i);
        scanf("%d", &Tab[i]);
    }
    printf("Total summation is %d\n", add_array(Tab, 5)); 
  return 0;
  }

int add_array (int *p, int size) {
  int total = 0;
  int k;
  for (k = 0; k < size; k++) {
    total += p[k];  /* it is equivalent to total +=*p ;p++; */}
 return (total);
 }