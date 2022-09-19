#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 15, 20, 25, 30};

    // way 1 to traverse
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // way 2 to traverse
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i[arr]);
    }

    return 0;
}