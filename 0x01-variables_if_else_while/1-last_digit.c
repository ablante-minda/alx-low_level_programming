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
		int n;
                int x;	
                           srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				x = n % 10;
				if (x > 5)
				{
					printf("%d last = %d is greater than 5", n, x);
				}
				else if (x == 0)
				{
					printf("%d last = %d is zero", n, x);
				}
				else if (x < 6 && x != 0)
				{
					printf("%d last = %d less than 6 and not 0", n, x);
				}
					return (0);

}
