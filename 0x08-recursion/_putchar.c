#include"main.h"
#include <unistd.h>
/**
 * _puttchar - sends the character to c to stdout
 * @c: the chaercter to print
 *
 * return: 1 on success
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
