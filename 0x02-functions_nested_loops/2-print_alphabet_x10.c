#include "main.h"
/**
 *print_alphabet_x10(void)-write the function
 *prints ten times the alphabet, in lowercase,
 *
*/

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

