#include "main.h"

/**
 * main-the starting point of applications
 *
 * Return: 0 for success
 */
int main(void)
{
	char input_[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(input_[i]);
	}

	_putchar('\n');
	return (0);

}

