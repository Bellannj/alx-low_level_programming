#include <stdio.h>
/**
 * main - a C program that prints the size of various types
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
