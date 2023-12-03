#include <stdio.h>
int main()
{
    // int a[5] = {1, 2, 3, 4, 5};
    // char a[5] = {'a', 'b', 'c', 'd', 'e'};
    // char a[6] = "xyzac\0";
    // char a[6] = "abcde";
    // ""  declare korle \0 nadileo hobe er jnn size 1 bariye dite hobe
    char a[6];
    scanf("%c", &a);

    // for (int i = 0; i < 5; i++)
    // {
    //     // printf("%d ", a[i]);
    //     printf("%c ", a[i]);
    // }
    printf("%s\n", a);// s diye string bojai for loop na saliyeo print kora jai ei babae
    // \0 mane nal eta dile onn gerbase print korbe naa
    return 0;
}