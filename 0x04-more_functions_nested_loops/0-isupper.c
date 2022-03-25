#include "main.h"

/**
 * _isupper - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if uppercase)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
