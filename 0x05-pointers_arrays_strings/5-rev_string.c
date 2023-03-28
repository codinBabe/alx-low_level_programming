#include "main.h"
void rev_string(char *s)
{
	int i, j, k;
	char m;
	for (i = 0; s[i] != '\0'; i++)
		k = i - 1;
	for (j = 0; k >= 0 && j < k; j--, k++)
	{
		m = s[j];
		s[j] = s[k];
		s[k] = m;
	}
}
