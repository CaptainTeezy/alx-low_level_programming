#include "main.h"
/**
 *_abs - writes the absolute value of integer
 *@i: input number as an integer
 *Return: Absolute value
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
