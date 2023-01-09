#include <stdio.h>
#define row 3
#define col 3
int main(void)
{
    int arr1[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *arr1Ptr = &arr1[0][0];
    int *arr2Ptr = &arr2[0][0];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            printf("%d ", (*(arr1Ptr + i) + j) + (*(arr2Ptr + i) + j));
        }
        puts("");
    }

    return 0;
}