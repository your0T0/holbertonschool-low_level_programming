#include "main.h"
/**
* str_concat - concatenates two strings into a newly allocated buffer
* @s1: first string (treated as "" if NULL)
* @s2: second string (treated as "" if NULL)
*
* Return: pointer to new string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *out;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0, k;
if (s1)
while (s1[len1] != '\0')
len1++;
if (s2)
while (s2[len2] != '\0')
len2++;
out = malloc((len1 + len2 + 1) * sizeof(char));
if (out == NULL)
return (NULL);
for (k = 0; k < len1; k++)
out[i++] = s1[k];
for (k = 0; k < len2; k++)
out[i++] = s2[k];
out[i] = '\0';
(void)j;
return (out);
}
