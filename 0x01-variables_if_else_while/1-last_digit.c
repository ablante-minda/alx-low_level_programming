#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - entery
 * Return: always 0
 */
int main(void)
{
	int n, last;

			srand(time(0));

				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				last = n % 10;
				if (last > 5)
				{
					printf("Last digit of %d is %d and greater than 5", n, last);
				}
				else if (last == 0)
				{
					printf("Last digit of %d is %d and is Zero", n, last);
				}
				else if (last < 6 && last != 0)
				{
					printf("Last digit of %d is %d and less than 6 and not 0", n, last);
				}
					return (0);

}
