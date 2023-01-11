#include <stdio.h>
/**
 * main - write a programe that print number of arguments pass into it
 *
 * @args: The argument count
 * @argv: The argument vector
 *
 * Return: return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
