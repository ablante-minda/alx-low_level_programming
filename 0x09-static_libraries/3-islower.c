#include "main.h"
/**
 * _islower - checks lowercase character
 * @c: The character
 * Return: 1 if lowercase, 0 for not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
