/* prog to calculate the prime factor numbers using for loop. */

#include<stdio.h>

int main() {

    int i = 0, j = 0, no = 0, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    printf("Prime factors of %d are: ", no);
    
    for (i = 2; i <= no; i++) {

        if (no % i == 0) {

            flag = 1;

            for( j = 2; j < i; j++) {

                if(i % j == 0) {

                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            
                printf("%d\t", i);
        }
    }

    printf("\n");
    return 0;
}
