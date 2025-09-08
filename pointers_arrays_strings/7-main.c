#include "holberton.h"
#include <stdio.h>

int _putchar(char c)
{
    return putchar(c);
}

void print_chessboard(char (*a)[8])
{
    int b, c;

    for (b = 0; b < 8; b++)
    {
        for (c = 0; c < 8; c++)
        {
            _putchar(a[b][c]);
        }
        _putchar('\n');
    }
}

int main(void)
{
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    print_chessboard(board);

    return 0;
}
