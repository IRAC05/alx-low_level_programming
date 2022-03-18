#include "main.h"

/**
 * _isdigit - check the code for digits 0 to 9
 * @c: The character to be checked.
 * Return: Always 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
