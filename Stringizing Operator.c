#include <stdio.h>
#define PRINT_VAR(buff, str) sprintf(buff, "%s", #str)

int main(void)
{
    int var;
    char buffer[100];
    PRINT_VAR(buffer, var);
    printf("%s, buffer");

    return 0;
}