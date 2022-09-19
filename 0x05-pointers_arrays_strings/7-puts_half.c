#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 * Return: half the input
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
