#include "main.h"

/**
  * _atoi - Write a function that convert a string to an integer
  * @s: Pointer to convert
  * Return: Integer success 0
  */

int _atoi(char *s)

{
		int d = 0;
		unsigned int erin = 0;
		int wil = 1;
		int rob = 0;

				while (s[d])
		{
				if (s[d] == 45)
		{
				wil *= -1;
		}
				while (s[d] >= 48 && s[d] <= 57)
		{
				rob = 1;
				erin = (erin * 10) + (s[d] - '0');
				d++;
		}
				if (rob == 1)
		{
				break;
		}
				d++;
		}
				erin *= wil;
				return (erin);
}
