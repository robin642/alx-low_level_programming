#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
  * make_buf - Its 1024 bytes
  * 2file: Name of file
  * Return: The pointer to buffer
  */

char *make_buf(char *page)

{
		char *alocate;

		alocate = malloc(sizeof(char) * 1024);

		if (alocate == NULL)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", page);

			exit(99);
		}
		return (alocate);
}

/**
  * empty_page - It empty file
  * @ans: The info
  */

void empty_page(int ans)

{
		int die;

		die = close(ans);

		if (die == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close ans %d\n", ans);

			exit(100);
		}
}

/**
  * main - It copy file to a new file
  * @argc: The arguments
  * @argv: The pointer
  * Return: 0
  */

int main(int argc, char *argv[])

{
		int you, me, i, am;
		char *alocate;

		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

			exit(97);
		}

		alocate = make_buf(argv[2]);

		you = open(argv[1], O_RDONLY);

		i = read(you, alocate, 1024);

		me = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

		do {
			if (you == -1 || i == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

				free(alocate);

				exit(98);
			}

			am = write(me, alocate, i);

			if (me == -1 || am == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

				free(alocate);

				exit(99);
			}

			i = read(you, alocate, 1024);

			me = open(argv[2], O_WRONLY | O_APPEND);

		} while (i > 0);

		free(alocate);

		empty_page(you);

		empty_page(me);

		return (0);
}
