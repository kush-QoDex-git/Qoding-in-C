#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}


int positive_int(int arr[],int n){
    int num =0;
    int posi_arr[num];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            ++num;
            posi_arr[num - 1]= arr[i];
        }
    }

    printArr(posi_arr,num);
    return num;
}

int main(){
    int n;
    printf("how many integers do you wanna add to your array: ");
    scanf("%d", &n);
    int arr1[n];
    int i = 1;
    do
    {
        printf("enter integer %d and press enter: ", i);
        scanf("%d", &arr1[i-1]);
        i++;
    } while (i<=n);

    printArr(arr1,n);
    printf("\n\n");
    printf("%d ", positive_int(arr1,n));

    return 0;
}