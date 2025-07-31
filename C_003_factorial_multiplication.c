//          Multiplication Table

#include <stdio.h>

int main()
{
    int n;
    printf("enter num for multiplication table: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }

    //          Multiplication Table in reverse
    printf("\n \tin reverse order\n");
    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }

    //      sum first n natural numbers using while loop.
    int w = 1;
    int s = 0;
    while (w <= n)
    {
        s += w;
        w++;
    }
    printf("\nsum first %d natural numbers using while loop:  %d \n", n, s);

    //    calculate the sum of the numbers occurring in the multiplication table of n. (consider 8 x 1 to 8 x 10).

    int sumn = 0;
    for (int i = 1; i <= 10; i++)
    {
        sumn += n * i;
    }

    printf("\nsum of the numbers occurring in the multiplication table of %d is: %d \n", n, sumn);
    //     factorial of n
    int fac = 1;
    if (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fac *= i;
        }
    }
    else
    {
        fac = 1;
    }
    printf("\nfactorial of %d is %d\n", n, fac);

    return 0;
}