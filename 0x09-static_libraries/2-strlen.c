#include "main.h"
/**
 * _strlen - function that returns the length os a string
 * @s: thi is the input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
