#include "main.h"

/**
 * main-the starting point of applications
 */
int main()
{
	char input_[8] = "_inputchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_inputchar(input_[i]);
	}

	_inputchar('\n');
	return (0);

}

