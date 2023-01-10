#include<stdio.h>

int main(void){
    int A[3][3], B[3][3], C[3][3], x, y, z;

    printf("Enter the elements of A matric: ");

    for (int x = 0; x < 3;x++){
        for (int y = 0; y < 3; y++){
            scanf("%d", &(*(*(A + x) + y)));
        }
    }
    printf("Enter the elements of B matric: ");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            scanf("%d", &(*(*(B + x) + y)));
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = 0;
            for (int z = 0; z < 3;z++){
                C[x][y] = C[x][y] + A[x][z] * B[z][y];
            }
        }

    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d ", C[x][y]);
        }
        puts("");
    }
        return 0;
}