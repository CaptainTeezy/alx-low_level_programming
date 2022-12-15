#include "main.h"
/**
 *print_sign - prints the sign of a number
 *Return: 1 if n is greater than zero, 0 if zer0, 1 if less
 *return: Always 0 (success)
 *@n: the varaible and its value
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
