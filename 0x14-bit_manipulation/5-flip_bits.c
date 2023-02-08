#include "main.h"

/**
 * flip_bits - count the number of bits needed to be flipped to get
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the necessary number of flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
