#include <stdio.h>
/**
 * main-entry
 * return:always 0
 */
int main(void)
{
	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of long int: %i byte(s)\n", sizeof(long int));
	printf("size of long long: %i byte(s)\n", sizeof(long long));
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}

