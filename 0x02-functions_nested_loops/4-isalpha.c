#include "main.h"
/**
 *_isalpha - writes a function that checks alpha c
 *@c: creates a input character
 *Return: 1 if c is a letter, 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);
	else
	return (0);
}
