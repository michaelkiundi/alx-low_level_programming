#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
