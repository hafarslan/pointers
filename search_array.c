#include<stdio.h>

int main(void){
    int arr[4] = {1, 2, 3, 4};
    int *arrPtr = arr;
    int search, flag = 0;
    printf("Enter search elements: ");
    scanf("%d", &search);
    for (size_t i = 0; i < 5; i++)
    {
        if (*(arrPtr +i) == search)
        {
            flag = 1;
           
        }
        
    }
    if (flag == 1)
    {
        printf("%d is found", search);
    }else{
        printf("%d not found", search);
    }
    
    
    return 0;
}