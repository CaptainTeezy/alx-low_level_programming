#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
	return (write(1, &c, 1));
=======
        return (write(1, &c, 1));
>>>>>>> c45b54b19ac9419cab217e41b075cef793f3f2cd
}
