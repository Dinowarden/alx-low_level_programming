#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks is a character is uppercase
 * @c: print int
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	int a = isupper(c);

	if (a == 0)
		return (a);
	else
		return (1);
}
