#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: the integer value, or 0 if no numbers in string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+' || s[i] == '-')
		{
			if (!started)
			{
				if (s[i] == '-')
					sign *= -1;
			}
			else
			{
				break;
			}
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			if (started)
				break;
		}
		i++;
	}

	return (sign * (int)num);
}
