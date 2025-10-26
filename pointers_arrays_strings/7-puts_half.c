#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len] != '\0')
        len++;

    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len + 1) / 2;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
