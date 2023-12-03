#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    // gets(a);
    // int count = 0;
    // that is for loop
    //  for (int i = 0; a[i] != '\0'; i++)
    //  {
    //      count++;
    //  }
    //  printf("%s", a);
    //  that is whilr loop
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     /* code */
    //     count++;
    //     i++;
    // }

    // printf("%d", count);
    // now length ber korar build function ready korsi
    //gets and fgets 
    int length = strlen(a);
    printf("%d", length);

    return 0;
}