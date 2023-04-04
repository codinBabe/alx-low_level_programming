#include "main.h"
/**
 * set_string - This function set the value of a pointer to a char
 * @s:a double pointer
 * @to:address pointed to by s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
