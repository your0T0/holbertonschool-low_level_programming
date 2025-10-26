#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
    int row, s, h;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (s = 0; s < (size - row); s++)
            _putchar(' ');
        for (h = 0; h < row; h++)
            _putchar('#');
        _putchar('\n');
    }
}
