#include <unistd.h>

/**
 * Putchar functionality
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
