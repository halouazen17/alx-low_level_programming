#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: the number to be checked
 * return: 1 for a character that will be a digit or a 0 for else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
