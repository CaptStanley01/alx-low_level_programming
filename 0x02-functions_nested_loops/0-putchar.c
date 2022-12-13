#include "puchar.h"
/**
 * main - functions point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *putchar = "_putchar";

	while (*putchar)
	{
		_putchar(*putchar);
		putchar++;
	}
	_putchar('\n');

	return (0);
}
