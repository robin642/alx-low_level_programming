#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - The concatenates n bytes of a string to another string
 * @s1: The string to append to
 * @s2: The string to concatenate from
 * @n: The number of bytes from s2 to concatenate to s1
 * Return: The pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
		char *q;
		unsigned int r = 0, w = 0, length1 = 0, length2 = 0;

		while (s1 && s1[length1])
			length1++;

		while (s2 && s2[length2])
			length2++;

		if (n < length2)
			q = malloc(sizeof(char) * (length1 + n + 1));

		else
			q = malloc(sizeof(char) * (length1 + length2 + 1));

		if (!q)
			return (NULL);

		while (r < length1)
		{
			q[r] = s1[r];
			r++;
		}

		while (n < length2 && r < (length1 + n))
			q[r++] = s2[w++];

		while (n >= length2 && r < (length1 + length2))
			q[r++] = s2[w++];

		q[r] = '\0';

		return (q);
}
