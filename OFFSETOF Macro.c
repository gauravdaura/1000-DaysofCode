#include <stdio.h>

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT)) 

typedef struct PadTags
{
    int i;
    double j;
    char k;
} PadType;

int main(void)
{
    printf("%Llu", OFFSETOF(PadType, k));
    getchar();

    return 0;
}