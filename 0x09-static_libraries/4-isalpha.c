#include "main.h"

/**
 * _isalpha - check for alphabet both lower and upper
 * @c: character to check
 *
 * Return: On success 1 is returned
 * on fail zero is return
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
