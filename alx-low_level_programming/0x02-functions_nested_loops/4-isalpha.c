#include "main.h"

/**
 * _isalpha - check if the given character is lower case
 * @c: character to test for
 * Return: 1 for alphabet characters or 0 for all else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

