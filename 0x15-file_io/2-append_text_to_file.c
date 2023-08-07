#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
  * append_text_to_file - It appends text at the end of a file
  * @filename: It's name of file
  * @text_content: It's the NULL terminated string
  * Return: 1 or -1
  */

int append_text_to_file(const char *filename, char *text_content)

{
		int pages, answer, p = 0;

		if (filename == NULL)

			return (-1);

		if (text_content != NULL)
		{
			for (answer = 0; text_content[answer];)

				answer++;
		}

		p = open(filename, O_WRONLY | O_APPEND);
		
		pages = (write(p, text_content, answer) < 0);

		if (p == -1 || pages == -1)

			return (-1);

		close(p);

		return (1);
}
