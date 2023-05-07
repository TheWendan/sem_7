#include <stdio.h>
#include <stdlib.h>
#include "71.h"

int main()
{
    unsigned char n;

    printf("Number of array elements: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int)); 
    for(int i = 0; i < n; i++)
    {
        printf("elem %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    ShellSort(n, arr);
    for(int i = 0; i < n - 1; i++)
        printf("%d, ", arr[i]);
    printf("%d ", arr[n - 1]);
    free(arr);
    return 0;   
}


