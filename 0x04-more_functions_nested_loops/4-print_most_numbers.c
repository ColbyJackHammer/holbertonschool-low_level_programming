#include "main.h"

/**
  *print_most_numbers - write a function that prints the numbers
  *from 0-9 followed by a new line.
  *
  *Do not print 2 or 4
  *Return: void.
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar('0' + i);
	}
_putchar('\n');
}

