#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: character to be checked
 * Return: 1 if c is a letter exit properly, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c <= 65 && c <= 90));

}
