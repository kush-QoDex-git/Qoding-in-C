#include <stdio.h>

int main()
{
    int threeDarr[3][2][5] = { {{2, 4, 6, 8, 10}, {3, 6, 9, 12, 15}},
                            {{11, 22, 33, 44, 55}, {12, 24, 36, 48, 60}},
                            {{10, 20, 30, 40, 50}, {102, 12, 34, 354, 67}} };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("threeDarr[%d][%d][%d]:  %d,  address: %d\n", i, j, k, threeDarr[i][j][k], &threeDarr[i][j][k]);
            }
        }
    }

    return 0;
}