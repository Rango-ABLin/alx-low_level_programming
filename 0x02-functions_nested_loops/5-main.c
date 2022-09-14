#include "main.h"

/**
 * main-the starting point of applications
 * print_sign: The function prints out the sign of the number,
 * + for numbers greater than 1, - for numbers less than 1, 0 for 0
 *
 * Return: 0 for success
 */
int main(void)
{
int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar('.');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
