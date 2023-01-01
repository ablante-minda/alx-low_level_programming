#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * prints all possible three combination number
 * Return: Always 0.
 */
int main(void)
{
	int num1;
	int num2;
	int num3 = 0;

	while (num3 < 10)
	{
		num2 = 0;

		while (num2 < 10)
		{
			num1 = 0;

			while (num1 < 10)
			{
				if (num1 != num2 && num2 != num3 && num3 < num2 && num2 < num1)
				{
					putchar('0' + num3);
					putchar('0' + num2);
					putchar('0' + num1);

					if (num1 + num2 + num3 != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num1++;
			}
			num2++;
		}
		num3++;
	}
	putchar('\n');
	return (0);
}
