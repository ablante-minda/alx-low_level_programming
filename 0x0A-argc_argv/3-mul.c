#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that can multiplies two numbers.
 * @argc: The argument count
 * @argv: The argument vectore
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, multi;

	multi = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}
