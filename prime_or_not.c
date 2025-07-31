// to check whether a given number is prime or not using loops.
#include <stdio.h>
int main()
{
    int npr;

    printf("\nenter the number to check if it is prime: ");
    scanf("%d", &npr);

    if (npr == 0 || npr == 1)
    {
        do
        {
            printf("\n0 and 1 are neither prime nor composite please enter another number: ");
            scanf("%d", &npr);

        } while (npr == 0 || npr == 1);
    }
    else if (npr == 2)
    {
        printf("\n%d is prime\n", npr);
    }

    for (int i = 2; i < npr; i++)
    {
        int r = npr % i;
        if (r == 0)
        {
            printf("\n%d is not prime\n", npr);
            break;
        }
        else if (i == (npr - 1))
        {
            printf("\n%d is  prime\n", npr);
            break;
        }
    }
    return 0;
}