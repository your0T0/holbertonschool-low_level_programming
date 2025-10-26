#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Mapping: a/A->4, e/E->3, o/O->0, t/T->7, l/L->1
 * Constraints: one if only; up to two loops; no switch/ternary.
 * Return: pointer to s
 */
char *leet(char *s)
{
	char *a = "aeotlAEOTL";
	char b = "43071 43071"; / positions 0..4 match a/A..l/L, will be replaced */
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j]) /* single if */
			{
				/* map j: 0->'4',1->'3',2->'0',3->'7',4->'1', same for uppercase */
				if (j % 5 == 0) s[i] = '4';
				else if (j % 5 == 1) s[i] = '3';
				else if (j % 5 == 2) s[i] = '0';
				else if (j % 5 == 3) s[i] = '7';
				else s[i] = '1';
				break;
			}
		}
		i++;
	}
	return (s);
}
