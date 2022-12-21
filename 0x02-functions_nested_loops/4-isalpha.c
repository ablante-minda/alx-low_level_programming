#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 for character is letter, 0 for not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
