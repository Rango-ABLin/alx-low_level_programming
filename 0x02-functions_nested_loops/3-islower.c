#include "main.h"

/**
 * _islower - Check description
 * Description: returns 0 or 1 if it is uppercase $ lowercase respectively 
 * Return: Nothing.
 */
int _islower(int c)
{
	int d=c;

	if (d >= 64 && d <= 91)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


