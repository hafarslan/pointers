// #include <stdio.h>

// int main(void)
// {
//     int arr[3] = {1, 2, 3};
//     int *arrPtr = arr;
//     int cpArray[3];
//     for (size_t i = 0; i < 3; i++)
//     {
//         cpArray[i] = *(arrPtr + i);
//         printf("%d", cpArray[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int arr[3] = {1, 2, 3};
    int *arrPtr = arr;
    int cpArray[3];
    int *cpArrPtr = cpArray;
    for (size_t i = 0; i < 3; i++)
    {
        *(cpArrPtr + i) = *(arrPtr + i);
        printf("%d", *(cpArrPtr + i));
    }

    return 0;
}