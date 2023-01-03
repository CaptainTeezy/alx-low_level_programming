#include "main.h"
#include <unistd.h>

/**
 * _isupper - check description
 * Description: checking for uppercase character
 * Return: 1 or 0
 * @c:input
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
