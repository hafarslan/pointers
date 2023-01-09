#include<stdio.h>

int main(void){
    int num1,num2;
    printf("Enter the values: ");
    // scanf("%d%d", &num1, &num2);
    int *num1Ptr = &num1;
    int *num2Ptr = &num2;
    scanf("%d%d", num1Ptr, num2Ptr);
    int sum = *num1Ptr + *num2Ptr;
    printf("Sum: %d", sum);
    return 0;
}