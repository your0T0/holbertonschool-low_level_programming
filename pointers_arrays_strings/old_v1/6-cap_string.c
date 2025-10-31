#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Separators: space, tab, newline, ',', ';', '.', '!', '?', '"', '(', ')',
 *             '{', '}'
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, cap = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i] != '\0')
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');

		cap = 0;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
		i++;
	}
	return (s);
}
