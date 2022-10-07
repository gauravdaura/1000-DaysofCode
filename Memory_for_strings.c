#include<stdio.h>

char *getString(void)
{
    static char str[] = "Gaurav";   // 3. "Static" important as if it not present, the string will be
                                    //    lost as stack memory will be cleared after the function returns

    return str;
}

int main(void)
{
    // char *str = "LCE";        // 1. read only memory; undefined result.
    // char str[] = "LCE";       // 2. work fines
    // printf("%s\n", str);

    // *(str+0) = 'G';
    // printf("%s\n", str);

    printf("%s", getString());

    return 0;
}