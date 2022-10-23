#include <stdio.h>

int main()
{
    int c = 10;

    switch ((int)(c == 10))
    {
        case 0:
            printf("False");
            break;
        case 1:
            printf("value of c = %d", c);
            break;
    }

    return 0;
}