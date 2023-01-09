#include <stdio.h>

int main(void)
{
    int arr1[3] = {1, 2, 3};
    int *arr1Ptr = arr1;
    int arr2[3] = {10,20,30};
    int *arr2Ptr = arr2;
    for (size_t i = 0; i < 3; i++)
    {
        int temparr[3] ;
        int *temparrPtr = temparr;
        *(temparrPtr+i) = *(arr1Ptr + i);
        *(arr1Ptr + i) = *(arr2Ptr + i);
        *(arr2Ptr + i) = *(temparrPtr + i);

    }
        printf("Array1 Elements: ");
        for (size_t i = 0; i < 3; i++)
        {
            printf(" %d", *(arr1Ptr + i));
    }
        printf("\nArray2 Elements: ");
        for (size_t i = 0; i < 3; i++)
        {
                printf("%d", *(arr2Ptr + i));
        }

            return 0;
}