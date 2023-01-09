#include "main.h"
#include "unistd.h"

/**
 * print_most_numbers - check description
 * Description: print the numbers 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	{
		_putchar(i + '0');
	}
	}
	_putchar('\n');
}
