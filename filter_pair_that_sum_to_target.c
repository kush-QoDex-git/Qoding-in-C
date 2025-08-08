#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int **twoSum(int *nums, int numsSize, int target)
{

    int **return_pairArr = (int **)malloc(1 * sizeof(int *));
    return_pairArr[0] = (int *)malloc(2 * sizeof(int));
    int **returnArr = (int **)malloc(1 * sizeof(int *));
    returnArr[0] = (int *)malloc(2 * sizeof(int));
    int numof_pair = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target && i != j)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (k == 0)
                    {
                        // return_pairArr[numof_pair][k] = nums[i];
                        returnArr[numof_pair][k] = i;
                    }
                    else
                    {
                        // return_pairArr[numof_pair][k] = nums[j];
                        returnArr[numof_pair][k] = j;
                    }

                    // printf("returnArr[%d][%d] = %d\n", numof_pair, k, returnArr[numof_pair][k]);
                    // printf("return_pairArr[%d][%d] = %d\n", numof_pair, k, return_pairArr[numof_pair][k]);
                }
                numof_pair++;
                // int **temp_pair =
                // realloc(return_pairArr, (numof_pair + 1) * sizeof(int *));

                // temp_pair[numof_pair] = (int *)malloc(2 * sizeof(int));

                // if (temp_pair != NULL)
                // {
                //     return_pairArr = temp_pair;
                // }
                int **temp =
                    realloc(returnArr, (numof_pair + 1) * sizeof(int *));

                temp[numof_pair] = (int *)malloc(2 * sizeof(int));

                if (temp != NULL)
                {
                    returnArr = temp;
                }
            }
        }
    }
    free(return_pairArr);
    return returnArr;
}

int ptrSize(int *ptr)
{
    int size = 0;
    while (ptr[size] != '\0')
    {
        size++;
    }
    return size + 1;
}


int numof_pairs(int *nums, int target)
{
    int numof_pair = 0;
    int numsSize = ptrSize(nums);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target && i != j)
            {
                numof_pair++;
            }
        }
    }
    return numof_pair;
}

int main()
{
    int arr[] = {2, 1, 3, 4, 5, 6, 9, 0};
    int *ptr = arr;
    

    int **ptr2 = twoSum(ptr, sizeof(arr) / 4, 9);
    for (int i = 0; i < numof_pairs(ptr, 9); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ptr2[%d][%d] = %d\n", i, j, ptr2[i][j]);
        }
        printf("\n");
    }
    printf("numof_pairs = %d\n", numof_pairs(ptr, 9));
    return 0;
}