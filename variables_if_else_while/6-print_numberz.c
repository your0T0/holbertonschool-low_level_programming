#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 from 0
*        using only putchar (no char variables)
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
}
putchar('\n');
return (0);
}
