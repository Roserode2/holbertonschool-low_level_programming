#include "main.h"

/**
 * _isdigit - This function checks for a digit
 * between 0 and 9
 * @c: This is the character to be checked
 * Return: 1 if theres a digit number, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
