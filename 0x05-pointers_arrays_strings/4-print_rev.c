#include "main.h"
/**
 * print_rev - print reverse string
 * @s: input string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\n'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	-putchar('\n');
}
