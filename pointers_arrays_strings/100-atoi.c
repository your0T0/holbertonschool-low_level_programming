#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	/* Skip non-numeric characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert digits to int */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign > 0)
		{
			if (result > (2147483647 - (s[i] - '0')) / 10)
				return (2147483647); /* INT_MAX */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			if (result < (-2147483648 + (s[i] - '0')) / 10)
				return (-2147483648); /* INT_MIN */
			result = result * 10 - (s[i] - '0');
		}
		i++;
	}

	return (result);
}
