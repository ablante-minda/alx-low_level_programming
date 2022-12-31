#include <stdio.h>
/**
 * main - Entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
		{
			continue;
		}
		else if (ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
