#include <stdio.h>
#include <string.h>
int main()
{
    char a[18];
    // size besi dite hobe gets er ketre
    // gets diye input nile space soho neya jai
    // gets(a);
    fgets(a, 14, stdin);
    // gets er ketre  char a[18];[size kom dile problem ar fget er ketre [eta kono metter kore na ]]
    //  fgets(a,koita print korte sassi,stdin); and eta enter o input nite pare
    printf("%s", a);

    return 0;
}