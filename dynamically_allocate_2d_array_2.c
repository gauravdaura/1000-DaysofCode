#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 3, c = 4, i, j, count;

    // 1st method
    // int* arr[r];

    // 2nd method
    int** arr = (int**) malloc( r * sizeof(int));

    // allocate memory
    for (i=0; i < r; i++)
    {
        arr[i] = (int*) malloc( c * sizeof(int) );
    }

    // assign values of array
    count = 0;
    for (i=0; i < r; i++)
        for (j=0; j < c; j++)
            arr[i][j] = ++count;

    // print array
    for (i=0; i < r; i++)
    {
        for (j=0; j < c; j++)
            printf("%d ", arr[i][j]);
            
        printf("\n");
    }
    // free memory
    for (i=0; i < r*c; i++)
    {
        free(arr[i]); 
    }

    return 0;
}