#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = b = c = d = 0;
    for (int i=0; ++a && i<10; i++)
        for (int j=0; ++a && j<100; j++);

    for (int m=0; ++b && m<100; m++)
        for (int n=0; ++b && n < 10; n++);

    printf("%d vs %d\n", a, b);    

    for (int m=0; m<100; m++, c++)
        for (int n=0; n < 10; n++, c++);
    
    for (int m=0; m<100; m++, d++)
        for (int n=0; n < 10; n++, d++);

    printf("%d vs %d\n", c, d);

    return 0;
}