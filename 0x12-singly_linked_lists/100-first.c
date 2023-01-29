#include <stdio.h>
/**
 * vmain - function executed before
 * Return: no return
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf("I bore my house upon my back!\n");
}
