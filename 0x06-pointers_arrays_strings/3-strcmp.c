#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	i = (*s1 == *s2)?0:(*s1 > *s2)?1:-1;
	return (i);
}
