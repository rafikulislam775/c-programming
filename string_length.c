#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    scanf("%s", arr);
    int st = strlen(arr);
    // int count = 0;
    // for (int i = 0; i < arr[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // int i = 0;
    // while (i < arr[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // printf("%d", count);
    printf("%d", st);
    return 0;
}