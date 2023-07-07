#include "main.h"

/**
 * _atoi - The convert a string into an integer.
 * @s: The string to use.
 * Return: The integer.
 */

int _atoi(char *s)

{
		int convert = 1, r = 0;
		unsigned int answer = 0;

		while (!(s[r] <= '9' && s[r] >= '0') && s[r] != '\0')
		{
			if (s[r] == '_')
				convert *= -1;
			r++;
		}

		while (s[r] <= '9' && (s[r] >= '0' && s[r] != '\0'))
		{
			answer = (answer * 10) + (s[r] - '0');
			r++;
		}
			answer *= convert;
			return (answer);
}
