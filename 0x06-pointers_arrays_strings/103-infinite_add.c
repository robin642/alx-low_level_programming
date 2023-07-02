#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{

		int y, s, t, u, v, w;
				for (y = 0; n1[y]; y++)
					;
				for (y = 0; n2[y]; y++)
					;
				if (y > size_r || s > size_r)

					return (0);

					v = 0;

				for (y -= 1, s -= 1, t = 0; t < size_r - 1; y--, s--, t++)
				{
					w = v;

				if (y >= 0)
					w += n1[y] - '0';
				if (s >= 0)
					w += n2[s] - '0';
				if (y < 0 && s < 0 && w == 0)
				{
					break;
				}

					v = w / 10;
					r[t] = w % 10 + '0';
				}
					r[t] = '\0';
				if (y >= 0 || s >= 0 || v)
					return (0);

				for (t -= 1, u = 0; u < t; t--, u++)
				{
					v = r[t];
					r[t] = r[u];
					r[u] = v;
				}
					return (r);
}
