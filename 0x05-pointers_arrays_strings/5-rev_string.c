#include "main.h"

/**
  * rev_string - Write a function that reverses a string
  *
  * @s: The string input.
  *
  * Return: Reverse string 0
  */

void rev_string(char *s)

{
		char reverse = s[0];
		int string = 0;
		int r;

		while (s[string] != '\0')
		string++;
		for (r = 0; r < string; r++)
		{
			string--;
			reverse = s[r];
			s[r] = s[string];
			s[string] = reverse;
		}
}
