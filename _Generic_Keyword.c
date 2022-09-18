#include <stdio.h>

#define TYPE_CHECK(T) _Generic( (T), char: 1, int: 2, long: 3, default: 0)

int main(void)
{
    printf("%d\n", TYPE_CHECK("A"));

    printf("%d\n", TYPE_CHECK('A'));

    return 0;
}