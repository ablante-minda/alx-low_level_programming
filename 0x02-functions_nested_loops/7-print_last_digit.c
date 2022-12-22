#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (ldigit < 0)
		ldigit *= -1;

	_putchar(ldigit + '0');

	return (0);
}
