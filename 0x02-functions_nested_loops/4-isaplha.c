#include "main.h"
/**
 * _isalpha checks for alphabetical letters
 * @c: a character to be checked on
 * Return: Always 0 or 1 depending.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

