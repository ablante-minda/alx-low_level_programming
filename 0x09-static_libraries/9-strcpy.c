#include "main.h"
/**
 * _strcpy - copiar
 * @dest: this is destiny
 * @src: copia
 * Return: return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
