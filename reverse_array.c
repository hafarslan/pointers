#include<stdio.h>

int main(void){
    int arr[6];
    int *arrPtr = arr;
    
    printf("Enter the elements of array: ");
    for (size_t i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < 3; i++)
    {
        int temp;
        int *tempPtr = &temp;
        *tempPtr = *(arrPtr+i);
        *(arrPtr+i)= *(arrPtr+(5 - i));
        *(arrPtr+(5 - i)) = *tempPtr;
    }
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d", *(arrPtr+i));
    }
    
    
    
    return 0;
}