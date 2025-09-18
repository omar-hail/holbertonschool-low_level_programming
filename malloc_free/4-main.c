#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int width = 5, height = 3, i, j;
    int **grid = alloc_grid(width, height);

    if (grid == NULL)
    {
        printf("Failed to allocate grid.\n");
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

    /* Free the grid */
    free_grid(grid, height);

    return (0);
}
