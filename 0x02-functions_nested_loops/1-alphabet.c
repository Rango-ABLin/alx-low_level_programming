#include "main.h"

/**
 * print_alphabet prints out the alphabet using a customised header file
 *
 * Description: It is called in the 1-main.c to print the alphabet
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}


