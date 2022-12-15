#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@x: input
 *Return: 0
*/
int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (y < 0)
	{
		y *= -1;
	}
		_putchar(y + '0');
		return (y);
}
