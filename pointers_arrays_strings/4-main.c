#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    reverse_array(arr, n);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return (0);
}
