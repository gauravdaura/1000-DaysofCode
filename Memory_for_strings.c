#include<stdio.h>

int main(void)
{
    //char *str = "LCE";      // read only memory; undefined result.
    char str[] = "LCE";       // work fines
    printf("%s\n", str);

    *(str+0) = 'G';
    printf("%s\n", str);

    return 0;
}