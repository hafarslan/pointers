#include<stdio.h>

int main(void){
    char a[5] = "hi";
    char b[5] = "hello";
    char *p1 = a;
    char *p2 = b;

    while (*p1 !='\0')
    {
        p1++;
    }
    while (*p2!='\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';
    printf("%s", a);

    return 0;
}