#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print all possible combination of two digit
 * Return: Always 0.
 */
int main (void)
{
	int num1;
	int num2 = 0;

	while (num2 < 10)
	{
		num1 = 0;

		while (num1 < 10)
		{
			if (num2 != num1 && num2 < num1)
			{
				putchar('0' + num2);
				putchar('0' + num1);

				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num1++;
		}
		num2++;
	}
	putchar('\n');
	return (0);
}

