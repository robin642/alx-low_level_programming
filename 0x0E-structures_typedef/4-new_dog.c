#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - It returns the length of a string
 * @s: The string to evaluate
 * Return: The length of the string
 */

int _strlen(char *s)

{
		int r;

		r = 0;

		while (s[r] != '\0')
		{
			r++;
		}

		return (r);
}

/**
 * *_strcpy - The copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: The pointer to the buffer in which we copy the string
 * @src: The string to be copied
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
		int length, r;

		length = 0;

		while (src[length] != '\0')
		{
			length++;
		}

		for (r = 0; r < length; r++)
		{
			dest[r] = src[r];
		}

		dest[r] = '\0';

		return (dest);
}

/**
 * new_dog - It creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: The pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)

{
		dog_t *dognew;
		int length1, length2;

		length1 = _strlen(name);
		length2 = _strlen(owner);

		dognew = malloc(sizeof(dog_t));
		if (dognew == NULL)
			return (NULL);

		dognew->name = malloc(sizeof(char) * (length1 + 1));
		if (dognew->name == NULL)
		{
			free(dognew);
			return (NULL);
		}

		dognew->owner = malloc(sizeof(char) * (length2 + 1));
		if (dognew->owner == NULL)
		{
			free(dognew);
			free(dognew->name);
			return (NULL);
		}

		_strcpy(dognew->name, name);
		_strcpy(dognew->owner, owner);
		dognew->age = age;

		return (dognew);
}
