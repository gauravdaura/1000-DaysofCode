#include <stdio.h>

int main(void)
{
    char *generate[L_tmpnam + 1];  // +1 for the NULL char

    tmpnam(generate);
    puts(generate);

    return 0;
}