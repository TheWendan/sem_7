#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, length; char c;
    char *arr;
    arr = malloc(0);
    for(int i = 0;(c = getchar()) != '\n'; i++)
    {
        arr[i] = c;
        arr = realloc(arr, i + 1);
        length = i;
    }
    for(int i = 0;i <= length;i++)
        printf("%c", arr[i]);  
    return 0;
}