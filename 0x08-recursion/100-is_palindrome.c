#include "main.h"
#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
	char rev_ = strrev(s);

	if (*rev_ == *s)
	{
		return (1);
	}
	else
		return (0);
}
