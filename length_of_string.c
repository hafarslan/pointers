#include<stdio.h>

int main(void){
    char str[100] = "I'm Muhmmad Arslan";
    char *strPtr = str;
    int count = 0;
    for (int i = 0; *(strPtr+i) != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}