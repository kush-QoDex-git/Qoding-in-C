/*           Calculate income tax paid by an employee to the government as per the slabs
                           mentioned below:
                            Income Slab       Tax

                       2.5 – 5.0L              5%
                       5.0L - 10.0L            20%
                       Above 10.0L             30%      */

#include <stdio.h>
int main(void)
{
    float inc;
    float tax;
    printf("enter your income: ");
    scanf("%f", &inc);

    if (250000 <= inc && inc <= 500000)
    {
        tax = 0.05 * inc;
    }
    else if (500000 < inc && inc <= 1000000)
    {
        tax = 0.2 * inc;
    }
    else if (1000000 < inc)
    {
        tax = 0.3 * inc;
    }
    else
    {
        tax = 0;
    };
    printf("your income tax is: %f \n", tax);

    //             using switch
    int selector = (int)inc / 250000;
    switch (selector)
    {
    case 0:
        tax = 0;
        break;
    case 1:
        tax = 0.05 * inc;
        break;
    case 2:
        tax = 0.2 * inc;
        break;
    case 3:
        tax = 0.2 * inc;
        break;
    default:
        tax = 0.3 * inc;
        break;
    }
    //    differnce between "switch" and "if" is only at extremes i.e., 250000,500000,1000000

    printf("your income tax is: %f \n", tax);

    //           leap year detection
    int yr;
    printf("enter year: ");
    scanf("%d", yr);
    if (yr % 4 == 0)
    {
        printf("year enter is a leap year \n");
    }
    else
    {
        printf("its not a leap year \n");
    }

    // to determine whether a character entered by the user is lowercase or not.
    char chr;
    printf("enter a character: ");
    scanf("%c", &chr);
    /*if ((int)chr >= 61 && (int)chr <= 79)
    {
        printf("character enter is not in caps \n");
    }
    else if ((int)chr >= 41 && (int)chr <= 59)
    {
        printf("character enter is in caps \n ");
    }
    else
    {
        printf("character is not an english alphabet \n");
    }*/
}
