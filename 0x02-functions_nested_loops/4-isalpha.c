#include "main.h"

/**
 * _isalpha: check description
 * Description: prints 1 if it is a character else prints 0
 * @c: input character
 * Return:1 for a character else 0
 */
int _isalpha(int c)
{
	int d = c;

	if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
	{
		return (1);
	}
	else
	{
		return (0);

	}

}
