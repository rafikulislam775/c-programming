#include <stdio.h>
int main()
{
    // character 1 bite kore jaiga ney 
    // number 4 bite kore jaiga ney
    char a[5];
    int size = sizeof(a);
    printf("%d\n", size);
    for (int i = 0; i < 5; i++)
    {
    scanf:
        ("%c", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}