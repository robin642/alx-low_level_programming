#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
  * create_file - It creates a file
  * @filename: The name of file to create
  * @text_content: The NULL terminated string
  * Return: -1 or 1
  */

int create_file(const char *filename, char *text_content)

{		int pages, answer, p = 0;


		if (filename == NULL)

			return (-1);

		if (text_content != NULL)
		{
			for (answer = 0; text_content[answer];)

				answer++;
		}

		pages = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

		p = write(pages, text_content, answer);

		if (pages == -1 || p == -1)

			return (-1);

		close(pages);

		return (1);
}
