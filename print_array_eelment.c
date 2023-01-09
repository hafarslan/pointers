#include<stdio.h>

int main(void){
    int arr[3] = {1, 2, 3};
    int * arrPtr = arr;
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d", *(arrPtr + i));
    }
    
    return 0;
}