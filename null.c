#include <stdio.h>
int main()
{
    // \0 holo null na abijabi asbe
    // char c[6] = "rahat\0";
    // " " dile size ta besi dile \0 deya lagbe na 
    char c[] = "rahat\0";
    int sz = sizeof(c) / sizeof(char);
    printf("%d\n", sz);
    printf("%s", c);
    return 0;
}