#include <stdio.h>

#define M   3
#define N   3

// 1. both dimension are avaiable globally
void print_1(int arr[M][N])
{
    int i,j;
    for(i=0; i < M; i++)
    {
        for(j=0; j < N; j++)
            printf("%d ", arr[i][j]);
        
        printf("\n");
    }
    printf("\n");
}

// 2. only second dimension is available global
void print_2(int arr[][N], int m)
{
    int i,j;
    for(i=0; i < M; i++)
    {
        for(j=0; j < N; j++)
            printf("%d ", arr[i][j]);
        
        printf("\n");
    }
    printf("\n");
}

// 3. no global dimension
void print_3(int m, int n, int arr[][n])
{
    int i,j;
    for(i=0; i < m; i++)
    {
        for(j=0; j < n; j++)
            printf("%d ", arr[i][j]);
        
        printf("\n");
    }
    printf("\n");
}

// 4. using single pointer (by typecasting it while passing)
void print_4(int *arr, int m, int n)
{
    int i,j;
    for(i=0; i < m; i++)
    {
        for(j=0; j < n; j++)
            printf("%d ", *((arr+i * n) + j));
        
        printf("\n");
    }
}

// 5. pointer to array parameter (like pointer of array of sizeof r to get memory of c)
void print_5(int (*arr)[M])
{
    int i,j;
    for(i=0; i < M; i++)
    {
        for(j=0; j < M; j++)
            printf("%d ", arr[i][j]);
        
        printf("\n");
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };
    int m = 3, n = 3;

    // 1.
    print_1(arr);

    // 2. 
    print_2(arr, 3);

    // 3. 
    print_3(3, 3, arr);

    // 4. 
    print_4((int*)arr, m, n);

    // 5.
    print_5(arr);

    return 0;
}