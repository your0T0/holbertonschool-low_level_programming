#include "main.h"
/**
* create_array - creates an array of chars, initialized with a specific char
* @size: array size
* @c: char to fill with
*
* Return: pointer to array, or NULL if size==0 or malloc fails
*/
char *create_array(unsigned int size, char c)
{
char *buf;
unsigned int i;
if (size == 0)
return (NULL);
buf = malloc(size * sizeof(char));
if (buf == NULL)
return (NULL);
for (i = 0; i < size; i++)
buf[i] = c;
return (buf);
}
