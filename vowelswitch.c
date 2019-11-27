/*Check whether given alphabet is vowel or consonant*/

#include <stdio.h>
    int
    main()
{
    char n;
    printf("Enter the alphabet:");
    scanf("%c", &n);
    switch (n)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':

    printf("%c is a vowel.\n", n);
        break;
    default:
        printf("%c is a consonant.\n", n);
        break;
    }

    return 0;
}