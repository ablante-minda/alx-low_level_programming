#include <stdio.h>
/**
 * main - write a program that prints its name, followed by a newu line
 * you rename the program it print the new name, with out having to
 * compile it again
 * you should not remove the path before the name of the programe
 *
 * @argc: This is the argument count
 * @argv: This the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
