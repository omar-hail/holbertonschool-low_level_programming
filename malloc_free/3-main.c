#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Test the alloc_grid function
 *
 * Return: 0 on success
 */
int main(void)
{
    int width = 4, height = 3, i, j;
    int **grid = alloc_grid(width, height);

    if (grid == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    /* Print the grid */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    /* Free the allocated memory */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);

    return (0);
}
