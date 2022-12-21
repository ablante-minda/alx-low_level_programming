#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: The character to print
 *
 * Return: on success 1
 * on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
