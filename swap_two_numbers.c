#include<stdio.h>
void swapNumbers(int *num1Ptr, int *num2Ptr);

int main(void)
{
    int num1, num2;
    printf("Enter Number1: ");
    scanf("%d", &num1);
    printf("Enter Number2: ");
    scanf("%d", &num2);
    swapNumbers(&num1, &num2);

    return 0;
}
void swapNumbers(int * num1Ptr,int * num2Ptr){
    int temp;
    temp = *num1Ptr;
    *num1Ptr = *num2Ptr;
    *num2Ptr = temp;
    printf("Number1: %d\nNumber2: %d", *num1Ptr, *num2Ptr);
}