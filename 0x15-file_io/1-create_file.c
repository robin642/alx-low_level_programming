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

{
		int pages, answer = 0;


		if (!filename)

			return (-1);

		if (!text_content)

			text_content = "";

			while (text_content[answer] != '\0')
			{
				answer++;
			}

		pages = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		write(pages, text_content, answer);

		if (pages == -1)

			return (-1);

		return (1);
}
