#include "main.h"
#include <stdio.h>

/**
  * leet - Write a function that encodes a string into 1337
  * letters a and A are replaced by 4
  * e E 3
  * o O 0
  * t T 7
  * l L 1
  * @r: pointer to string
  * Return: pointer to r
  */

char *leet(char *r)

{
		int str_len, leetcout;
		char leetletrs[] = "aAeEoOtTlL";
		char leetnumbs[] = "4433007711";

		str_len = 0;
		while (r[str_len] != '\0')
		{
			leetcout = 0;
			while (leetcout < 10)
			{
				if (leetletrs[leetcout] == r[str_len])
				{
					r[str_len] = leetnumbs[leetcout];
				}
					leetcout++;
			}
					str_len++;
		}
					return (r);
}
