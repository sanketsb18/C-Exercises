/* program to calculate the frequency of a digit in a given number. */

#include<stdio.h>
#define size 10

int main (){
    int n, lastdigit,i;
    int long long freq[size];
    printf("Enter the number:");
    scanf("%d",&n);

     /* Initialize array to 0 */
    for(i=0; i<size; i++)
    {
        freq[i] = 0;
    }

       
    while(n!=0){

        lastdigit = n %10;

        n/=10;

        freq[lastdigit]++;
    }

    for(i=0; i<size; i++){

    printf("frequency of %d digit is %lld\n",i,freq[i]);
    }
    return 0;
}