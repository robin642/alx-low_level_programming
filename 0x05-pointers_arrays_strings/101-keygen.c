#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Program that generates random valid passwords for the program 101-crackme.
  * Return: Always success 0.
  */

int main(void)

{
		char keygen[84];
		int hack = 0, sum = 0, diff_half1, diff_half2;

		srand(time(0));

		while (sum < 2772)

		{
			keygen[hack] = 33 + rand() % 94;
			sum += keygen[hack++];
		}

			keygen[hack] = '\0';

			if (sum != 2772)
		{
			diff_half1 = (sum - 2772) / 2;
			diff_half2 = (sum - 2772) / 2;

			if ((sum - 2772) % 2 != 0)
			diff_half1++;

			for (hack = 0; keygen[hack]; hack++)
		{
				if (keygen[hack] >= (33 + diff_half2))
			{
				keygen[hack] -= diff_half1;
				break;
			}
		}
			
			for (hack = 0; keygen[hack]; hack++)
		
			{
				if (keygen[hack] >= (33 + diff_half2))
			{
			
			keygen[hack] -= diff_half2;
			break;
		}
		}
		}
			printf("%s", keygen);
			return (0);
}
