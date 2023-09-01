#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes to the stdout
 * @c: the character to be printed
 * Return: 1 (sucessful).
 * On error,-1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
