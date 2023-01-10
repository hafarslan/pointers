#include<stdio.h>
#include<string.h>
int main(void){
    char str1[100];
    char str2[100];
    printf("Enter the string: ");
    gets(str1);
    char *p1, *p2;
    p1 = str1 + strlen(str1) - 1;
    p2 = str2;

    while (p1>=str1)
    {
        *p2 = *p1;
        p2++;
        p1--;
    }
    *p2 = '\0';
    printf("%s", str2);
    return 0;
}