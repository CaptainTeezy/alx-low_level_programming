#include "main.h"
/**
 *_islower - write a function that checks for lowercase character.
 *@c: the function to check
 *Returns: 1 if c is lowercase, 0 if otherwise
 *Return: Always 0 (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
