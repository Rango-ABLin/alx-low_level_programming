#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: prints the alphabet in lowercase x10 followed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char i;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}


