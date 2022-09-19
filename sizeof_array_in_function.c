#include <stdio.h>
#include <stdlib.h>

void arr_size(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        arr[i] = i;
    }
}

int main(void)
{
    int arr[] = {0, 0, 0, 0};
    size_t n;

    n = sizeof(arr) / sizeof(arr[0]);
    arr_size(arr, n);

    printf("The size of array is %Ld\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}