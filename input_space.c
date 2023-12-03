#include <stdio.h>
#include <string.h>
int main()
{
    char a[18];
    //normal input  spaces takle spaces er pore code print hobe na 
    // ei jnn gets ba fgets use korte hobe
    // gets(a); 
    fgets(a, 10, stdin);
    // fgets use korle(arrName, arrsize, stdin) eta must be lekte hobe 
    printf("%s", a);
    return 0;
}