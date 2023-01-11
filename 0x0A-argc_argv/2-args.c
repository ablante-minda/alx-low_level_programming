#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all the argument that a programe receives.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Alwayes (0) sucess.
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
