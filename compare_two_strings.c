#include<stdio.h>

int main(void){
    char str1[10] = "HI this";
    char str2[10] = "HI this";
    char *p1 = str1;
    char *p2 = str2;
    int flag = 1;
    for (int i = 0; *(p1 + i)!='\0'; i++)
    {
        if (*(p1+i)!=*(p2+i))
        {
            flag = 0;
        }
        
    }
    if (flag == 0)
    {
        printf("Not");
    }else{
        printf("Yes");
    }
    
    return 0;
}