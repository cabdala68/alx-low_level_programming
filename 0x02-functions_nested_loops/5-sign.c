#include "main.h"
/**
 * print_sign - Prints the sign of  a number
 * @n: integer
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * 1 and prints - is n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
