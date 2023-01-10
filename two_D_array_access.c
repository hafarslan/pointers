#include<stdio.h>
#define row 3
#define col 3
int main(void){
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int *arrPtr = &arr[0][0];

    for (size_t i = 0; i < row; i++)
    {

        for (size_t j = 0; j < col; j++)
        {
            printf("%d ", *(arrPtr + i) + j);
        }
        puts("");
    }
    
    return 0;
}