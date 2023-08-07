#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * read_textfile - It reads a text file
  * @filename: If file name is 0
  * @letters: The number of letteres read and print
  * Return: 0
  */

ssize_t read_textfile(const char *filename, size_t letters)

{
		ssize_t fln;
		char *react;
		ssize_t act;
		ssize_t cat;


		fln = open(filename, O_RDONLY);
		
		if (fln == -1)
		{
			return (0);
		}

		react = malloc(sizeof(char) * letters);

		cat = read(fln, react, letters);

		act = write(STDOUT_FILENO, react, cat);

		free(react);

		close(fln);

		return (act);
}
