#include "main.h"
#include <stdio.h>
/**
 * _strbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
