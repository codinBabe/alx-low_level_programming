#include "main.h"
/**
 * _strdup - This function returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter.
 *  @str:the string to be copied
 *  Return:pointer to the duplicated string on success, NULL on error.
 */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *copy;

	if (str == NULL)
		return NULL;
	
	while (str[len] != '\0')
		len++;
	
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return NULL;
	
	for (i = 0; i <= len; i++)
		copy[i] = str[i];
	
	return copy;

}
