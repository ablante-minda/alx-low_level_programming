#include "main.h"
/**
 * rev_string - revers string
 * @s: pointer to string
 * return: void
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		tenp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
