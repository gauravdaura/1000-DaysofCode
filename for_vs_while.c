#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i=0; i <= 5; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    int i=0; 
    sum = 0;

    while (i <= 5)
    {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);

    return 0;   
}