#include "main.h"

/**
 * _isalpha - Check Holberton
 * @n: An input character
 * Description: function returns 1 if the number is a
 * greater than 1, 0 if it 0, and -1 if it is <1.
 *
 * It also prints the sign of the number dependent on
 * whether it is less or greater than 1
 * Return: 1 or 0 in otherwise.
 */
int print_sign(int n)
{
	int i = n;

	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
