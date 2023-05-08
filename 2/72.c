#include <stdio.h>
#include <stdlib.h>

void address()
{
    unsigned length; char c;
    char *arr; char *address;
    arr = malloc(0);
    for(int i = 0;(c = getchar()) != '\n'; i++)
    {
        arr[i] = c;
        arr = realloc(arr, i + 1);
        length = i;
    }
    for(int i = 0;i <= length;i++)
        printf("%c", arr[i]);
    address = arr;  
    printf("\naddress - %p", address);
}